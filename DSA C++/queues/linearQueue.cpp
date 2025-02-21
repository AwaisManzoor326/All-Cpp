#include <iostream>
using namespace std;

class Lqueue
{
private:
    int *queue;
    int front, rear, size, capacity;

public:
    Lqueue(int capacity)
    {
        this->capacity = capacity;
        queue = new int[capacity];
        size = front = rear = 0;
    }

    bool isEmpty()
    {
        return size == 0;
    }

    bool isFull()
    {
        return size == capacity;
    }

    void enqueue(int data)
    {
        if(isFull())
        {
            cout << "Queue is full"<<endl;
        }
        else
        {
            cout<<data <<" inserted..."<<endl;
            queue[rear++] = data;
            size++;
        }
    }

    void dequeue()
    {
        if(isEmpty())
        {
            cout << "Queue is empty"<<endl;
        }
        else
        {
            cout<<"Removed front data : "<<queue[front++]<<endl;
            size--;
        }

        if(front == rear)
        {
            front = rear = 0;
        }
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Queue is empty"<<endl;
        }
        else
        {
            cout<<"Queue elements are: ";
            for (int i = front; i < rear; i++)
            {
                cout<<queue[i]<<" ";
            }
            cout<<endl;
        }
    }

    ~Lqueue()
    {
        delete[] queue;
    }
};

int main()
{
    Lqueue q(4);
    q.enqueue(10);
    q.enqueue(11);
    q.enqueue(13);
    q.enqueue(16);
    q.display();

    q.dequeue();
    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}