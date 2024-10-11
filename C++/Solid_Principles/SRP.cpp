#include <iostream>
// SRP: Class responsible only for user-related functionalities
class User
{
private:
    int m_age;
    std::string m_name;

public:
    User(std::string name, int age) : m_name(name), m_age(age) {}

    int getAge()
    {
        return m_age;
    }

    std::string getName()
    {
        return m_name;
    }

    void display()
    {
        std::cout << "Name: " << m_name << std::endl
                  << "Age: " << m_age << std::endl;
    }
};

int main()
{
    User user("Mohammed", 20);
    user.display();
}