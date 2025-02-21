#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = prev = nullptr;
    }
};

class list
{
private:
    Node *head;
    Node *tail;

public:
    list() : head(nullptr), tail(nullptr)
    {
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

    void addFirst(int data)
    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void addLast(int data)
    {
        Node *newNode = new Node(data);
        if (isEmpty())
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
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

        for (int i = 0; i < position - 1; i++)
        {
            if (current == nullptr)
            {
                cout << "Position out of bounds!" << endl;
                delete newNode;
                return;
            }
            current = current->next;
        }

        if (current == tail)
        {
            addLast(data);
        }
        else if (current != nullptr)
        {
            newNode->next = current->next;
            newNode->prev = current;
            if (current->next != nullptr)
                current->next->prev = newNode;
            current->next = newNode;
        }
        else
        {
            cout << "Position out of bounds!" << endl;
            delete newNode;
        }
    }

    void removeFront()
    {
        if (isEmpty())
        {
            cout << "List is empty..." << endl;
            return;
        }

        Node *temp = head;
        if (head == tail)
        {
            head = tail = nullptr;
        }
        else
        {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
    }

    void removeLast()
    {
        if (isEmpty())
        {
            cout << "List is empty..." << endl;
            return;
        }

        if (head == tail) // Only one node in the list
        {
            delete head;           // Delete the single node
            head = tail = nullptr; // Update head and tail to nullptr
        }
        else
        {
            Node *temp = tail;    // Temp points to the last node
            tail = tail->prev;    // Move tail to the previous node
            tail->next = nullptr; // Disconnect the last node
            delete temp;          // Delete the original last node
        }
    }

    void remove(int data)
    {
        if (isEmpty())
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        if (head->data == data)
        {
            removeFront();
            return;
        }

        if (tail->data == data)
        {
            removeLast();
            return;
        }

        Node *current = head;
        while (current != nullptr && current->data != data)
        {
            current = current->next;
        }

        if (current != nullptr)
        {
            current->prev->next = current->next;
            if (current->next != nullptr)
            {
                current->next->prev = current->prev;
            }
            delete current;
        }
        else
        {
            cout << "Value not found!!" << endl;
        }
    }

    void displayForward()
    {
        if (isEmpty())
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        Node *current = head;
        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "nullptr" << endl;
    }

    void displayBackward()
    {
        if (isEmpty())
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        Node *current = tail;
        while (current != nullptr)
        {
            cout << current->data << " -> ";
            current = current->prev;
        }
        cout << "nullptr" << endl;
    }

    void clear()
    {
        while (!isEmpty())
        {
            removeFront();
        }
    }

    int size()
    {
        int count = 0;
        Node *current = head;
        while (current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }

    bool contains(int data)
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data == data)
                return true;

            current = current->next;
        }
        return false;
    }
};

int main()
{
    list dll;

    dll.addLast(10);
    dll.addLast(20);
    dll.addLast(30);
    dll.displayForward();

    dll.addFirst(5);
    dll.displayForward();

    dll.addAt(2, 15);
    dll.displayForward();
    dll.displayBackward();

    dll.remove(20);
    dll.displayForward();

    dll.removeFront();
    dll.displayForward();

    dll.removeLast();
    dll.displayForward();

    cout << (dll.contains(15) ? "Found" : "Not Found") << endl;

    cout << "Size: " << dll.size() << endl;

    dll.clear();
    dll.displayForward();

    return 0;
}