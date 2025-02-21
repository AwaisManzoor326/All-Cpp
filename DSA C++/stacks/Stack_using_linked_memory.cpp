#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class stack
{
private:
    node *top;
    int size;

public:
    stack() : top(nullptr), size(0) {}

    bool isEmpty()
    {
        return top == nullptr;
    }

    void push(int data)
    {
        node *newNode = new node(data);
        newNode->next = top;
        top = newNode;
        size++;
    }

    int topElement()
    {
        if (isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow! Cannot pop.\n";
            return;
        }
        node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    void display()
    {
        if(isEmpty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }
        node *top = this->top;
        while(top != nullptr)
        {
            cout << top->data << " ";
            top = top->next;
        }
        cout << endl;
    }

    ~stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

int main()
{
    stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element is: " << s.topElement() << "\n";
    s.display();

    s.pop();
    s.pop();

    cout << "Top element after popping: " << s.topElement() << "\n";

    s.pop();
    s.pop(); // Attempt to pop from an empty stack
    s.display();

    return 0;
}