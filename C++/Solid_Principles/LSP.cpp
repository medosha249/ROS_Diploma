#include <iostream>

struct Rectangle
{
    int m_Width;
    int m_Height;

    Rectangle(int width, int height) : m_Width(width), m_Height(height) {}

    int getWidth() const
    {
        return m_Width;
    }

    virtual void setWidth(int m_width)
    {
        this->m_Width = m_width;
    }

    int getHeight() const
    {
        return m_Height;
    }

    virtual void setHeight(int m_height)
    {
        this->m_Height = m_height;
    }

    int getArea() const
    {
        return m_Height * m_Width;
    }
};

struct Square : public Rectangle
{
    Square(int width, int height) : Rectangle(width, height) {}

    int getWidth() const
    {
        return m_Width;
    }

    void setWidth(int m_width) override
    {
        m_Height = m_width = m_width;
    }

    int getHeight() const
    {
        return m_Height;
    }

    void setHeight(int m_height) override
    {
        m_Height = m_Width = m_height;
    }

    int getArea() const
    {
        return m_Width * m_Height;
    }
};

void Process(Rectangle &r)
{
    int w = r.getWidth(); // 5
    r.setHeight(10);      // width = 10 , height = 10
    std::cout << "Expected Area : " << (w * 10) << "  , got  : " << r.getArea() << std::endl;
}

int main()
{
    Rectangle rectangle(5, 5);

    Process(rectangle);

    Square square(5, 5);

    Process(square);
}