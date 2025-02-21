#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value) : data(value), next(nullptr) {}
};

class circularly_LinkedList
{
private:
    node *tail;

public:
    circularly_LinkedList() : tail(nullptr) {}

    bool isEmpty()
    {
        return tail == nullptr;
    }

    void addFirst(int data)
    {
        node *newNode = new node(data);
        if (isEmpty())
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
        }
    }

    void addLast(int data)
    {
        node *newNode = new node(data);
        if (isEmpty())
        {
            tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void addAt(int position, int data)
    {
        if (position < 0)
        {
            cout << "Invalid Position!!!" << endl;
            return;
        }

        if (position == 0)
        {
            addFirst(data);
            return;
        }

        node *newNode = new node(data);
        node *current = tail->next;

        for (int i = 0; i < position - 1; i++)
        {
            if (current == tail)
            {
                cout << "Invalid position!!!" << endl;
                delete newNode;
                return;
            }
            current = current->next;
        }

        newNode->next = current->next;
        current->next = newNode;

        if (current == tail) // If the user provides the last position
        {
            tail = newNode;
        }
    }

    void removeFirst()
    {
        if (isEmpty())
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        node *temp = tail->next;
        if (tail == tail->next)
        {
            tail = nullptr; // Only one node in the list
        }
        else
        {
            tail->next = temp->next;
        }
        delete temp;
    }

    void removeLast()
    {
        if (isEmpty())
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        node *temp = tail->next;
        if (tail == tail->next)
        {
            delete tail;
            tail = nullptr; // Only one node in the list
        }
        else
        {
            while (temp->next != tail)
            {
                temp = temp->next;
            }
            temp->next = tail->next;
            delete tail;
            tail = temp;
        }
    }

    void removeFrom(int position)
    {
        if (position < 0)
        {
            cout << "Invalid position!!!" << endl;
            return;
        }

        if (position == 0)
        {
            removeFirst();
            return;
        }

        node *current = tail->next;
        for (int i = 0; i < position - 1; i++)
        {
            if (current == tail)
            {
                cout << "Position is not valid!!!" << endl;
                return;
            }
            current = current->next;
        }

        node *temp = current->next;
        if (temp == tail)
        {
            tail = current; // Update tail if the last node is removed
        }
        current->next = temp->next;
        delete temp;
    }

    void remove(int value)
    {
        if (isEmpty())
        {
            cout << "List is empty!!!" << endl;
            return;
        }

        node *current = tail->next;
        node *prev = tail;
        do
        {
            if (current->data == value)
            {
                if (current == tail->next)
                {
                    removeFirst();
                }
                else if (current == tail)
                {
                    removeLast();
                }
                else
                {
                    prev->next = current->next;
                    delete current;
                }
                return;
            }
            prev = current;
            current = current->next;
        } while (current != tail->next);

        cout << "Value not found!!" << endl;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Nothing to show..." << endl;
            return;
        }

        node *current = tail->next;
        do
        {
            cout << current->data << " -> ";
            current = current->next;
        } while (current != tail->next);
        cout << "[now back to head]" << endl;
    }

    void clear()
    {
        while (!isEmpty())
        {
            removeFirst();
        }
    }
};

int main()
{
    circularly_LinkedList CLL;
    CLL.addFirst(231);
    CLL.addFirst(232);
    CLL.addFirst(233);
    CLL.addLast(123);
    CLL.addLast(124);
    CLL.addLast(125);
    CLL.addAt(3, 567);
    CLL.display();

    CLL.removeFirst();
    CLL.display();

    CLL.removeLast();
    CLL.display();

    CLL.removeFrom(2);
    CLL.display();

    CLL.remove(123);
    CLL.display();

    CLL.remove(500);   // Value not found
    CLL.removeFrom(8); // Invalid position
    CLL.display();

    return 0;
}
