#include <iostream>
using namespace std;
const int size = 5;
class stack
{
private:
    int top;

    int arr[size];

public:
    stack()
    {
        top = -1; // Initialize top to -1, indicating the stack is empty
    }

    bool isfull()
    {
        return (top == size - 1); // Return true if the stack is full
    }

    bool isempty()
    {
        return (top == -1); // Return true if the stack is empty
    }

    void push(int value)
    {
        if (isfull())
        {
            cout << "Stack is full\n"; // Notify user if the stack is full
        }
        else
        {
            arr[++top] = value; // Increment top and add value to stack
            cout << "Value pushed: " << value << endl;
        }
    }

    void pop()
    {
        if (isempty())
        {
            cout << "Stack is empty\n"; // Notify user if the stack is empty
        }
        else
        {
            cout << "Value popped: " << arr[top] << endl; // Display popped value
            top--;                                        // Decrement top to remove the element
        }
    }

    int peek()
    {
        if (isempty())
        {
            cout << "Stack is empty..." << endl; // Notify user if the stack is empty
            return -1;                           // Return -1 as an error code
        }
        else
        {
            return arr[top]; // Return the top element
        }
    }

    void display()
    {
        if (isempty())
        {
            cout << "Stack is empty... No elements to show" << endl; // Notify user if the stack is empty
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++)
            {
                cout << arr[i] << " "; // Print each element in the stack
            }
            cout << endl; // New line for better readability
        }
    }
};

int main()
{
    stack s;
    s.push(1);
    s.push(10);
    s.push(100);
    s.push(1000);
    s.push(10000);
    s.push(100000); // Trying to push to a full stack
    s.display();

    cout << "Top element is: " << s.peek() << endl; // Print the top element

    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.display();

    return 0;
}
