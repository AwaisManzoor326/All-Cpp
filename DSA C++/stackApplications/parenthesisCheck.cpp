#include <iostream>
using namespace std;

class node
{
public:
    char data;
    node *next;

    node(char data)
    {
        this->data = data;
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

    void push(char data)
    {
        node *newnode = new node(data);
        newnode->next = top;
        top = newnode;
        size++;
    }

    void pop()
    {
        if (isEmpty())
        {
            return; // Avoid unnecessary output here
        }
        node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }

    ~stack()
    {
        while (!isEmpty())
        {
            pop();
        }
    }
};

// Function to check if the parentheses in the expression are balanced
bool checkParenthesis(const string &expression)
{
    stack s;
    for (char c : expression)
    {
        if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            if (!s.isEmpty())
            {
                s.pop();
            }
            else
            {
                return false; // Closing parenthesis without matching opening
            }
        }
    }
    return s.isEmpty(); // True if stack is empty (balanced), false otherwise
}

int main()
{
    string exp;
    cout << "Enter an expression: ";
    cin >> exp;

    if (checkParenthesis(exp))
    {
        cout << "Your expression \"" << exp << "\" is balanced." << endl;
    }
    else
    {
        cout << "Your expression \"" << exp << "\" is not balanced." << endl;
    }

    return 0;
}