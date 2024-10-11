#include <iostream>
#define size 5
template <typename T>
class Queue
{
    int front, rear;
    T items[size];

public:
    Queue() : front(-1), rear(-1) {}

    bool isFull()
    {
        if ((front == 0 && rear == size - 1) || (front == rear + 1))
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }

    void enqueue(T element)
    {
        if (isFull())
        {
            std::cout << "Queue is full\n";
        }
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % size;
            items[rear] = element;
        }
    }

    T dequeue()
    {
        int element;
        if (isEmpty())
        {
            std::cout << "Queue is Empty\n";
            return (-1);
        }
        else
        {
            element = items[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
            {
                front = (front + 1) % size;
            }
            return (element);
        }
    }

    void display()
    {
        if (isEmpty())
        {
            std::cout << "Queue is Empty\n";
        }
        else
        {
            std::cout << "Items = [ ";
            int i = front;
            while (true)
            {
                std::cout << items[i];
                if (i == rear)
                    break;
                std::cout << ", ";
                i = (i + 1) % size;
            }
            std::cout << " ]\n";
        }
    }
};

int main()
{
    Queue<int> queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.enqueue(4);
    queue.enqueue(5);
    queue.display();
}