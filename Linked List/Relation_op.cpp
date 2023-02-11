#include <iostream>

const int MAX_SIZE = 100;

class Queue
{
private:
    int front, rear;
    int queue[MAX_SIZE];

public:
    Queue()
    {
        front = rear = -1;
    }

    bool isEmpty()
    {
        return (front == -1 && rear == -1);
    }

    bool isFull()
    {
        return (rear+1)%MAX_SIZE == front ? true : false;
    }

    void enqueue(int data)
    {
        if (isFull())
        {
            std::cout << "Queue is full\n";
            return;
        }
        if (isEmpty())
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear+1)%MAX_SIZE;
        }
        queue[rear] = data;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty\n";
            return;
        }
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front = (front+1)%MAX_SIZE;
        }
    }

    int frontElement()
    {
        if (isEmpty())
        {
            std::cout << "Queue is empty\n";
            return -1;
        }
        return queue[front];
    }
};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    std::cout << q.frontElement() << "\n";
    q.dequeue();
    std::cout << q.frontElement() << "\n";
    q.dequeue();
    std::cout << q.frontElement() << "\n";
    q.dequeue();
    return 0;
}