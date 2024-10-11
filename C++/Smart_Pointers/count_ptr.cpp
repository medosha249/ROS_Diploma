#include <iostream>
template <typename T>
class CountPtr
{
private:
    T *ptr;
    long *ref_count;

public:
    CountPtr() : ref_count(new long(1)), ptr(new T)
    {
    }
    CountPtr(const CountPtr &copy)
    {
        this->ptr = copy.ptr;
        ref_count = copy.ref_count;
        *ref_count++;
    }

    CountPtr &operator=(const CountPtr &copy)
    {
        if (this != &copy)
        {
            ++(*ref_count);

            if (*ref_count == 0)
            {
                delete ptr;
                delete ref_count;
            }
            this->ptr = copy.ptr;
            this->ref_count = copy.ref_count;
            (*ref_count)++;
        }
        return *this;
    }

    T &operator*()
    {
        return *ptr;
    }

    ~CountPtr()
    {
        --(*ref_count);
        if (ref_count == 0)
        {
            delete ptr;
            delete ref_count;
        }
    }
};

int main()
{
    CountPtr<int> ptr;
    *ptr = 10;
    CountPtr ptr2 = ptr;
    std::cout << "ptr2 value: " << *ptr2 << std::endl;
}