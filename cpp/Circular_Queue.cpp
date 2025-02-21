#include <iostream>
using namespace std;

class CircularQueue
{
private:
    int *queue;
    int front, rear, size, capacity;

public:
    CircularQueue(int cap)
    {
        capacity = cap;
        queue = new int[capacity];
        front = 0;
        rear = -1;
        size = 0;
    }
    
    ~CircularQueue()
    {
        delete[] queue;
    }

    bool isFull() // Check if the queue is full
    {
        return size == capacity;
    }

    bool isEmpty() // Check if the queue is empty
    {
        return size == 0;
    }

    void enqueue(int value)
    {
        if (isFull())
        {
            cout << "Queue is full, removing the oldest element to add a new one." << endl;
            front = (front + 1) % capacity; // Remove the oldest element
        }
        else
        {
            size++;
        }
        rear = (rear + 1) % capacity; // Move the rear pointer
        queue[rear] = value;          // Insert the new element
        cout << "Inserted: " << value << endl;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue underflow, no elements to remove." << endl;
        }
        else
        {
            cout << "Removed: " << queue[front] << endl;
            front = (front + 1) % capacity; // Move the front pointer
            size--;
        }
    }

    // Display the current elements in the queue
    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty." << endl;
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
    CircularQueue q(3); // Initialize the queue with capacity 3

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();

    q.enqueue(40); // This will overwrite the oldest element (10)
    q.display();

    q.dequeue(); // Remove 20
    q.display();

    return 0;
}