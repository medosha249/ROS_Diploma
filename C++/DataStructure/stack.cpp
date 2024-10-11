#include <iostream>
const int MAX_SIZE = 100;
template <class T>
class Stack
{
private:
    int top;
    T item[MAX_SIZE];

public:
    Stack() : top(-1) {}

    void push(T element)
    {
        if (top >= MAX_SIZE -1 )
        {
            std::cout << "Stack is full!" << std::endl;
        }
        else
        {
            top++;
            item[top] = element;
        }
    }
    bool is_empty()
    {
        return top < 0;
    }

    void pop()
    {
        if (!is_empty())
        {
            top--;
        }
        else
        {
            std::cout << "Stack is Empty!" << std::endl;
        }
    }

    void pop(T &element)
    {
        if (!is_empty())
        {
            element = item[top];
            top--;
        }
        else
        {
            std::cout << "Stack is Empty!" << std::endl;
        }
    }
    void getTop(T &stackTop)
    {
        if (!is_empty())
        {
            stackTop = item[top];
            std::cout << stackTop;
        }
        else
        {
            std::cout << "Stack is Empty!" << std::endl;
        }
    }
    void print()
    {
        std::cout << "[ ";
        for (int i = top; i >= 0 ; i--)
        {
            std::cout << item[i] << " ";
        }
        std::cout << "]" << std::endl;
    }
};

int main()
{
    Stack<int> arr;
    arr.push(6);
    arr.push(5);
    arr.push(2);
    arr.push(9);
    arr.push(7);
    arr.print();

    Stack<std::string> st;
    st.push("Omar");
    st.push("Tarek");
    st.push("Ammar");
    st.push("Alaa");
    st.print();
}