#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Queue
{
private:
    node *front;
    node *rear;

public:
    Queue() : front(NULL), rear(NULL)
    {
    }

    bool isEmpty()
    {
        return front == NULL;
    }

    void enqueue(int data)
    {
        node *newNode = new node(data);
        if (isEmpty())
            front = rear = newNode;

        rear->next = newNode;
        rear = newNode;
        cout << data << " inserted......" << endl;
    }

    void dequeue()
    {
        if (isEmpty())
            cout << "Queue is empty.....No data to remove...." << endl;
        else
        {
            node *temp = front;
            front = front->next;
            cout << temp->data << " removed from front..." << endl;
            delete temp;
            if (front == NULL)
                rear = NULL;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty....No elements to show...." << endl;
        }
        else
        {
            node *current = front;
            while (current != NULL)
            {
                cout << current->data << " -> ";
                current = current->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{
    Queue q;
    q.display();
    q.enqueue(123);
    q.enqueue(183);
    q.enqueue(133);
    q.enqueue(153);
    q.enqueue(113);
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();

    return 0;
}