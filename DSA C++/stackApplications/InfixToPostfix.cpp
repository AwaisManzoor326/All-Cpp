#include <iostream>
#include <stack>
#include <string>
#include <cctype> // For isdigit()
#include <cmath>  // For pow()

using namespace std;

bool isOperator(char op)
{
    return op == '+' || op == '-' || op == '*' || op == '/' || op == '^';
}

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// CONVERSION : INFIX -> POSTFIX ......................................
string InfixToPostfix(const string &infix)
{
    stack<char> s;
    string postfix = "";
    for (int i = 0; i < infix.size(); i++)
    {
        char c = infix[i];

        if (isdigit(c))
        {
            // Handle multi-digit numbers
            string num = "";
            while (i < infix.size() && isdigit(infix[i]))
            {
                num += infix[i];
                i++;
            }
            i--; // Adjust for extra increment in while loop
            postfix += num + " "; // Add space to separate numbers
        }
        else if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            while (!s.empty() && s.top() != '(')
            {
                postfix += s.top();
                postfix += " ";
                s.pop();
            }
            if (!s.empty())
                s.pop();
        }
        else if (isOperator(c))
        {
            while (!s.empty() && precedence(s.top()) >= precedence(c))
            {
                postfix += s.top();
                postfix += " ";
                s.pop();
            }
            s.push(c);
        }
        else if (c != ' ') 
        {
            cout << "Error: Invalid character in input: " << c << endl;
            return "";
        }
    }
    while (!s.empty())
    {
        postfix += s.top();
        postfix += " ";
        s.pop();
    }
    return postfix;
}

// EVALUATION OF POSTFIX EXPRESSION ......................................
int EvaluatePostfix(const string &postfix)
{
    stack<int> s;
    int i = 0;
    while (i < postfix.size())
    {
        if (isdigit(postfix[i]))
        {
            // Handle multi-digit numbers
            string num = "";
            while (i < postfix.size() && isdigit(postfix[i]))
            {
                num += postfix[i];
                i++;
            }
            s.push(stoi(num)); // Convert string to integer
        }
        else if (isOperator(postfix[i]))
        {
            int b = s.top();
            s.pop();
            int a = s.top();
            s.pop();
            switch (postfix[i])
            {
            case '+':
                s.push(a + b);
                break;
            case '-':
                s.push(a - b);
                break;
            case '*':
                s.push(a * b);
                break;
            case '/':
                if (b == 0)
                {
                    cerr << "Error: Division by zero" << endl;
                    return 0;
                }
                s.push(a / b);
                break;
            case '^':
                s.push(pow(a, b));
                break;
            }
        }
        i++;
    }
    return s.top();
}

bool checkParenthesis(const string &expression)
{
    stack<char> s;
    for (char c : expression)
    {
        if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')')
        {
            if (!s.empty())
            {
                s.pop();
            }
            else
            {
                return false; // Closing parenthesis without matching opening
            }
        }
    }
    return s.empty(); // True if stack is empty (balanced), false otherwise
}

int main()
{
    string Infix;
    cout << "Write an infix expression: ";
    getline(cin, Infix);
    if (checkParenthesis(Infix))
    {
        string postfix = InfixToPostfix(Infix);
        if (postfix.empty())
        {
            cerr << "Error in conversion" << endl;
            return 1;
        }
        cout << "Its postfix form is: " << postfix << endl;
        int result = EvaluatePostfix(postfix);
        cout << "Its evaluation result is: " << result << endl;
    }
    else
    {
        cout << "Invalid expression" << endl;
    }
    return 0;
}
