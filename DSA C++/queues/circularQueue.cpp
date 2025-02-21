#include <iostream>
using namespace std;

class cQueue
{
private:
    int *queue;
    int front, rear, size, capacity;

public:
    cQueue(int capacity)
    {
        this->capacity = capacity;
        queue = new int[capacity];
        size = front = 0;
        rear = -1;
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
        if (isFull())
        {
            cout << "Queue is full...Removing oldest one to accomodate new..." << endl;
            front = (front + 1) % capacity; // removing front  element
        }
        else
        {
            size++;
        }
        rear = (rear + 1) % capacity;
        queue[rear] = data;
        cout << data << " inserted..." << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue is empty...Nothing to remove..." << endl;
        }
        else
        {
            cout << "Removed " << queue[front] << " from front..." << endl;
            front = (front + 1) % capacity;
            size--;
        }
        
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty...Nothing to show..." << endl;
        }
        else
        {
            cout << "Queue elements are: ";
            for (int i = 0; i < size; i++)
            {
                cout << queue[(front + i) % capacity] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    cQueue q(5);
    q.enqueue(23);
    q.enqueue(239);
    q.enqueue(237);
    q.enqueue(234);
    q.enqueue(222);
    q.enqueue(203);
    q.display();

    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    q.dequeue();

    return 0;
}