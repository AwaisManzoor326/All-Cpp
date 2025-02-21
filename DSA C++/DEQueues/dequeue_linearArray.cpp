#include <iostream>
using namespace std;

#define MAX 10

class DEQueue
{
private:
    int arr[MAX];
    int front, rear, size;

public:
    DEQueue() : front(-1), rear(-1), size(0)
    {
        for(int i = 0; i < MAX; i++)
            arr[i] = 0;
    }

    bool isfull()
    {
        return size == MAX;
    }

    bool isempty()
    {
        return size == 0;
    }

    void enqueueF(int data)
    {
        if (isfull())
        {
            cout << "DEQueue is full!!!" << endl;
            return;
        }

        if (isempty()) // First element
        {
            front = rear = 0;
        }
        else
        {
            front = (front - 1 + MAX) % MAX; // Circular decrement
        }
        arr[front] = data;
        size++;
    }

    void enqueueR(int data)
    {
        if (isfull())
        {
            cout << "DEQueue is full!!!" << endl;
            return;
        }

        if (isempty()) // First element
        {
            front = rear = 0;
        }
        else
        {
            rear = (rear + 1) % MAX; // Circular increment
        }
        arr[rear] = data;
        size++;
    }

    void dequeueF()
    {
        if (isempty())
        {
            cout << "DEQueue is empty!!!" << endl;
            return;
        }

        if (front == rear) // Single element
        {
            front = rear = -1;
        }
        else
        {
            front = (front + 1) % MAX; // Circular increment
        }
        size--;
    }

    void dequeueR()
    {
        if (isempty())
        {
            cout << "DEQueue is empty!!!" << endl;
            return;
        }

        if (front == rear) // Single element
        {
            front = rear = -1;
        }
        else
        {
            rear = (rear - 1 + MAX) % MAX; // Circular decrement
        }
        size--;
    }

    void display()
    {
        if (isempty())
        {
            cout << "DEQueue is empty!!!" << endl;
            return;
        }

        cout << "[ ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[(front + i) % MAX] << " ";
        }
        cout << "]" << endl;
    }
};

int main()
{
    DEQueue dq;

    // Testing the DEQueue
    dq.enqueueF(10);
    dq.enqueueF(20);
    dq.enqueueR(30);
    dq.enqueueR(40);

    dq.display(); // [ 20 10 30 40 ]

    dq.dequeueF();
    dq.display(); // [ 10 30 40 ]

    dq.dequeueR();
    dq.display(); // [ 10 30 ]

    dq.enqueueR(50);
    dq.enqueueF(60);
    dq.display(); // [ 60 10 30 50 ]

    dq.dequeueF();
    dq.dequeueR();
    dq.display(); // [ 10 30 ]

    return 0;
}
