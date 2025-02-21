#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class List
{
private:
    Node *head;

public:
    List() : head(NULL) {}

    bool isEmpty()
    {
        return head == NULL;
    }

    void addFirst(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }

    void addLast(int data)
    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            head = newNode;
        }
        else
        {
            Node *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    void addAt(int position, int data)
    {
        if (position < 0)
        {
            cout << "Invalid position!" << endl;
            return;
        }

        if (position == 0)
        {
            addFirst(data);
            return;
        }

        Node *newNode = new Node(data);
        Node *current = head;

        for (int i = 0; i < position - 1; ++i)
        {
            if (current == NULL)
            {
                cout << "Position out of bound!" << endl;
                delete newNode;
                return;
            }
            current = current->next;
        }

        if (current != NULL)
        {
            newNode->next = current->next;
            current->next = newNode;
        }
        else
        {
            cout << "Position out of bound!" << endl;
        }
    }

    void remove(int data)
    {
        if (isEmpty())
        {
            cout << "List is empty!" << endl;
            return;
        }

        if (head->data == data)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *current = head;
        while (current->next != NULL && current->next->data != data)
        {
            current = current->next;
        }

        if (current->next != NULL)
        {
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
        else
        {
            cout << "Value not found!" << endl;
        }
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
            return;
        }

        Node *current = head;
        while (current != NULL)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }
};

int main()
{
    List sll;

    sll.addLast(10);
    sll.addLast(20);
    sll.addLast(30);
    sll.display();

    sll.addFirst(5);
    sll.display();

    sll.addAt(2, 15);
    sll.display();

    sll.remove(20);
    sll.display();

//    sll.display();


    return 0;
}
