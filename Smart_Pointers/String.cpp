#include <iostream>
#include <cstring> 

class String
{
    char *m_Data;
    uint32_t m_Size;

public:
    String() : m_Data(nullptr), m_Size(0) {} // Initialize members
    String(const char *string)
    {
        printf("Created!\n");
        m_Size = strlen(string);
        m_Data = new char[m_Size + 1]; // Allocate an extra byte for null terminator
        memcpy(m_Data, string, m_Size);
        m_Data[m_Size] = '\0'; // Ensure null termination
    }
    // Copy Constructor
    String(const String &other)
    {
        printf("Copied!\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size + 1]; // Allocate an extra byte for null terminator
        memcpy(m_Data, other.m_Data, m_Size);
        m_Data[m_Size] = '\0'; // Ensure null termination
    }
    // Move Constructor
    String(String &&other) noexcept
        : m_Data(other.m_Data), m_Size(other.m_Size)
    {
        printf("Moved!\n");
        other.m_Data = nullptr;
        other.m_Size = 0;
    }

    // Move Assignment Operator
    String &operator=(String &&other) noexcept
    {
        printf("Move Assigned!\n");
        if (this != &other)
        {
            delete[] m_Data;
            m_Data = other.m_Data;
            m_Size = other.m_Size;

            other.m_Data = nullptr;
            other.m_Size = 0;
        }
        return *this;
    }

    ~String()
    {
        printf("Freed\n");
        delete[] m_Data;
    }
};

int main()
{
    String str("Mohammed");
    String src("Name");
    String dest;
    dest = std::move(src); // Triggers move assignment
    std::cin.get();
}
