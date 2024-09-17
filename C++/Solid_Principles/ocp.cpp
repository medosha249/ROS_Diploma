#include <iostream>
#include <vector>
#include <memory>

std::string vColor[] = {"Red", "Green", "Blue"};
enum class Color
{
    Red,
    Green,
    Blue
};

std::string vSize[] = {"Small", "Medium", "Large"};
enum class Size
{
    Small,
    Medium,
    Large
};

struct Product
{
    std::string m_name;
    Color m_color;
    Size m_size;
};

typedef std::vector<Product *> Items;

template <class T>
class IsSpecification
{
public:
    virtual bool isSatisfiedBy(T *item) = 0;
};

class ColorSpecification : public IsSpecification<Product>
{
public:
    Color color;
    explicit ColorSpecification(Color color) : color(color) {}

    bool isSatisfiedBy(Product *s) override
    {
        return (s->m_color == color);
    }
};

class SizeSpecification : public IsSpecification<Product>
{
public:
    Size size;
    explicit SizeSpecification(Size size) : size(size) {}

    bool isSatisfiedBy(Product *s) override
    {
        return (s->m_size == size);
    }
};

class SizeAndColorSpecification : public IsSpecification<Product>
{
public:
    Color color;
    Size size;

    explicit SizeAndColorSpecification(Color color, Size size) : color(color), size(size) {}

    bool isSatisfiedBy(Product *s) override
    {
        return (s->m_color == color && s->m_size == size);
    }
};

template <class F>
class Find
{
public:
    virtual std::vector<F *> find(std::vector<F *> items, IsSpecification<F> &spec) = 0;
};

class FindProduct : public Find<Product>
{
public:
    std::vector<Product *> find(std::vector<Product *> items, IsSpecification<Product> &spec) override
    {
        Items result;
        for (auto &p : items)
        {
            if (spec.isSatisfiedBy(p))
                result.push_back(p);
        }
        return result;
    }
};

int main(int argc, char *argv[])
{
    Product apple{"Apple", Color::Green, Size::Small};
    Product car{"Car", Color::Blue, Size::Large};
    Product tree{"Tree", Color::Green, Size::Large};

    ColorSpecification green{Color::Green};
    SizeSpecification large{Size::Large};
    SizeAndColorSpecification size_color{Color::Green, Size::Large};

    FindProduct fp;

    std::vector<Product *> allproducts{&apple, &tree, &car};

    // auto results = fp.Find(allproducts, green);
    auto results = fp.find(allproducts, size_color);

    for (auto &i : results)
    {
        std::cout << i->m_name << " is " << vColor[(int)i->m_color] << " and " << vSize[(int)i->m_size] << std::endl;
    }

    return 0;
}
