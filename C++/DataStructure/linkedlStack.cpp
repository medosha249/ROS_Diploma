#include <iostream>
template <typename T>
class Stack
{
    struct Node
    {
        T item;
        Node *next;
    };
    Node *top, *current;

public:
    Stack() : top(NULL) {}

    void push(T value)
    {
        Node *newItem = new Node;
        if (newItem == NULL)
        {
            std::cout << "Stack push cannot allocate memory\n";
        }
        else
        {
            newItem->item = value;
            newItem->next = top;
            top = newItem;
        }
    }

    bool Empty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (Empty())
        {
            std::cout << "Stack is Empty" << std::endl;
        }
        else
        {
            Node *temp = top;
            top = top->next;
            delete temp;
        }
    }

    void pop(T &stackTop)
    {
        if (Empty())
        {
            std::cout << "Stack is Empty" << std::endl;
        }
        else
        {
            stackTop = top->item;
            Node *temp = top;
            top = top->next;
            temp->next = NULL;
            delete temp;
        }
    }

    T getTop(T &topItem)
    {
        if (Empty())
        {
            std::cout << "Stack is Empty" << std::endl;
        }
        else
        {
            topItem = top->item;
            return topItem;
        }
        return -1;
    }

    void display()
    {
        current = top;
        std::cout << "\nItems in the stack : ";
        std::cout << "[ ";
        while (current != NULL)
        {
            std::cout << current->item << " -> ";
            current = current->next;
        }
        std::cout << " ]" << std::endl;
    }
};

int main()
{
    Stack<int> s;
    s.push(7);
    s.push(6);
    s.push(10);
    s.push(66);
    s.display();
    s.pop();
    s.display();
}