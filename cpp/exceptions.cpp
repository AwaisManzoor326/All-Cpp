// #include <iostream>
// using namespace std;

// const int MAX_SIZE = 3; // Renaming 'max' to avoid conflicts with std::max

// class stack
// {
// private:
//     int top;
//     int st[MAX_SIZE]; // Use 'MAX_SIZE' here

// public:
//     class Range
//     { // Exception class
//     };

//     stack()
//     {
//         top = -1; // Constructor initializes top to -1
//     }

//     void push(int value)
//     {
//         if (top >= MAX_SIZE - 1)
//         {                  // Use 'MAX_SIZE' here
//             throw Range(); // Stack is full
//         }
//         st[++top] = value; // Increment top and push value
//     }

//     int pop()
//     {
//         if (top < 0)
//         {
//             throw Range(); // Stack is empty
//         }
//         return st[top--]; // Return value and decrement top
//     }
// };

// int main()
// {
//     stack s1;
//     try
//     {
//         s1.push(10);
//         s1.push(20);
//         s1.push(30);
//         // s1.push(40);  // Uncommenting this will cause stack full exception
//         cout << "1: " << s1.pop() << endl;
//         cout << "2: " << s1.pop() << endl;
//         cout << "3: " << s1.pop() << endl;
//         // cout << "4: " << s1.pop() << endl;  // Uncommenting this will cause stack empty exception
//     }
//     catch (stack::Range)
//     {
//         cout << "Exception! Stack Full or Empty..." << endl;
//     }

//     cout << "Arrive here after catch or normal exit" << endl;
//     return 0;
// }
//////////Miltiple exceptions .....................
// #include <iostream>
// using namespace std;

// const int MAX = 3; // Stack holds 3 integers

// class Stack
// {
// private:
//     int st[MAX]; // Stack: array of integers
//     int top;     // Index of top of stack
// public:
//     class Full
//     {
//     }; // Exception class for full stack
//     class Empty
//     {
//     }; // Exception class for empty stack

//     Stack() { top = -1; } // Constructor initializes top to -1

//     void push(int var)
//     {                       // Put number on stack
//         if (top >= MAX - 1) // If stack is full,
//             throw Full();   // Throw Full exception
//         st[++top] = var;    // Increment top and push the value
//     }

//     int pop()
//     {                      // Take number off stack
//         if (top < 0)       // If stack is empty,
//             throw Empty(); // Throw Empty exception
//         return st[top--];  // Return the value and decrement top
//     }
// };

// int main()
// {
//     Stack s1;
//     try
//     {
//         s1.push(11);
//         s1.push(22);
//         s1.push(33);
//         // s1.push(44); // Uncommenting this will throw the Full exception
//         cout << "1: " << s1.pop() << endl;
//         cout << "2: " << s1.pop() << endl;
//         cout << "3: " << s1.pop() << endl;
//         // cout << "4: " << s1.pop() << endl; // Uncommenting this will throw the Empty exception
//     }
//     catch (Stack::Full)
//     {
//         cout << "Exception: Stack Full" << endl;
//     }
//     catch (Stack::Empty)
//     {
//         cout << "Exception: Stack Empty" << endl;
//     }

//     return 0;
// }

// Exceptions with arguments

#include <iostream>
using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    // Exception class
    class InchesEx
    {
    public:
        string origin;
        float inchs;

        InchesEx(string orig, float in) : origin(orig), inchs(in) {} // Constructor with initialization list
    };

    // Default constructor
    Distance() : feet(0), inches(0.0) {}

    // Parameterized constructor
    Distance(int ft, float in)
    {
        if (in >= 12.0)
            throw InchesEx("02-arguments constructor", in);
        feet = ft;
        inches = in;
    }

    // Function to set distance
    void setDistance()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: "; // Fixed typo here
        cin >> inches;
        if (inches >= 12.0)
            throw InchesEx("setDistance() function", inches);
    }

    // Function to display the distance
    void show()
    {
        cout << feet << "'-" << inches << "\"" << endl;
    }
};

int main()
{
    try
    {
        Distance d1(5, 11.1); // This will work
        Distance d2;
        d2.setDistance(); // Might throw an exception if inches >= 12.0

        cout << "Distance1 = ";
        d1.show();
        cout << "Distance2 = ";
        d2.show();
    }
    catch (Distance::InchesEx ix)
    {
        cout << "Initialization error in " << ix.origin << endl
             << "Inches value of " << ix.inchs << " is too large." << endl;
    }

    return 0;
}