
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }
};

class List
{
private:
    Node *head;

public:
    List() : head(nullptr)
    {}

    bool isEmpty()
    {
        return head == nullptr;   
    }

    // Add the given data at the first position in list OR head position
    void addFirst(int data)
    {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
    }
    // add given data at the last position in the list
    void addLast(int data)
    {
        Node* newNode = new Node(data);
        if(isEmpty())
            head = newNode;
        else{
            Node* current = head;
            while(current->next != nullptr)
                current = current->next;
            current->next = newNode;
        }
    }
    // add the given data at given position in the list
    void addAt(int position, int data)
    {
        if(position<0)
        {
            cout<<"Invalid given position!!!"<<endl;
            return;
        }

        if(position == 0)
        {
            addFirst(data);
            return;
        }

        Node* newNode = new Node(data);
        Node* current = head;
        for(int i = 0; i < position; ++i)
        {
            if(current == nullptr)
            {
                cout<<"Position out of bound!!!"<<endl;
                return;
            }
            current = current->next;
        }

        if(current != nullptr)
        {
            newNode->next = current->next;
            current->next = newNode;
        }else{
            cout<<"Position out of bound!!!"<<endl;
        }
    }
    // remove the given value from list
    void remove(int data)
    {
        if(isEmpty())
        {
            cout<<"List is empty!!!"<<endl;
            return;
        }

        if(head->data == data)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        while(current->next != nullptr && current->next->data != data)
            current = current->next;
        if(current->next != nullptr)
        {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
        }else{
            cout<<"Value not found!!!"<<endl;
        }
    }

    // remove the value of given position
    void removeFrom(int position)
    {
        if(isEmpty())
        {
            cout<<"List is empty!!!"<<endl;
            return;
        }

        if(position < 0)
        {
            cout<<"Invalid position!!!"<<endl;
            return;
        }

        if(position == 0)
        {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* current = head;
        for(int i = 0; i < position-1; ++i)
        {
            if(current == nullptr || current->next == nullptr)
            {
                cout<<"Position out of bound!!!"<<endl;
                return;
            }
            current = current->next;
        }
        Node* temp = current->next;
        if(temp != nullptr)
        {
            current->next = temp->next;
            delete temp;
        }else{
            cout<<"Position out of bound!!!"<<endl;
        }
    }

    // delete all data from list
    void clear()
    {
        Node* current = head;
        while(current != nullptr)
        {
            Node* temp = current->next;
            current = current->next;
            delete temp;
        }
        head = nullptr;
    }

    // check whether the given data present in list or not
    bool contains(int data)
    {
        Node* current = head;
        while(current != nullptr)
        {
            if(current->data == data)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // calculates the size of list
    int size()
    {
        int count = 0;
        Node* current = head;
        while(current != nullptr)
        {
            count++;
            current = current->next;
        }
        return count;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "List is empty." << endl;
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

};

int main()
{
    List sll;

        // Add elements
        sll.addLast(10);
        sll.addLast(20);
        sll.addLast(30);
        sll.display(); // Output: 10 -> 20 -> 30 -> nullptr

        // Add at the beginning
        sll.addFirst(5);
        sll.display(); // Output: 5 -> 10 -> 20 -> 30 -> nullptr

        // Add at a specific position
        sll.addAt(2, 15);
        sll.display(); // Output: 5 -> 10 -> 15 -> 20 -> 30 -> nullptr

        // Remove an element
        sll.remove(20);
        sll.display(); // Output: 5 -> 10 -> 15 -> 30 -> nullptr

        // Remove at a specific position
        sll.removeFrom(1);
        sll.display(); // Output: 5 -> 15 -> 30 -> nullptr

        // Check if the list contains a value
        cout << (sll.contains(15) ? "Found" : "Not Found") << endl; // Output: Found

        // Get the size of the list
        cout << "Size: " << sll.size() << endl; // Output: Size: 3

        // Clear the list
        sll.clear();
        sll.display(); // Output: List is empty.

    return 0;
}