#include <iostream>
#include <stack>
#include <string>
#include <cctype>  // for isdigit() function
using namespace std;

// DECLARATIONS UTILITY FUNCTIONS...............................
bool isOperator(char);
int precedence(char);
bool checkParenthesis(const string &);

// Node structure...............................................
class Tnode
{
public:
    string data;
    Tnode *left;
    Tnode *right;

    Tnode(string value) : data(value), left(nullptr), right(nullptr) {}
};

// DECLARATIONS MAIN FUNCTIONS..................................
string infixTopostfix(const string &);
Tnode *buildTree(string);
void preOrder_Traversal(Tnode *);
void inOrder_Traversal(Tnode *);
void postOrder_Traversal(Tnode *);

int main()
{
    cout << "Enter Infix expression: ";
    string infix;
    getline(cin, infix); // 2+3*(5*2)/4  
    if (checkParenthesis(infix))
    {
        string postfix = infixTopostfix(infix);
        if (!postfix.empty())
        {
            Tnode *root = buildTree(postfix);
            cout << "Preorder traversal: ";
            preOrder_Traversal(root);
            cout << endl;

            cout << "Inorder traversal: ";
            inOrder_Traversal(root);
            cout << endl;

            cout << "Postorder traversal: ";
            postOrder_Traversal(root);
            cout << endl;
        }
    }
    else
    {
        cout << "Error: Unbalanced expression in input !!!" << endl;
    }
    return 0;
}

// helper function to check for operator
bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}

// helper function to check for precedence
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

// helper function to check for parenthesis
bool checkParenthesis(const string &exp)
{
    stack<char> s;
    for (char c : exp)
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
                return false; // closing parenthesis ocuur without opening one
            }
        }
    }
    return s.empty();
}

// first we will convert infix to postfix to build expression tree easily............
string infixTopostfix(const string &infix)
{
    stack<char> s;
    string postfix = "";

    for (int i = 0; i < infix.size(); i++)
    {
        char c = infix[i];
        if (isdigit(c))
        {
            string num = "";
            while (i < infix.size() && isdigit(infix[i]))
            {
                num += infix[i];
                i++;
            }
            i--;

            postfix += num + ' ';
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
                postfix += ' ';
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
                postfix += ' ';
                s.pop();
            }
            s.push(c);
        }
        else if (c != ' ')
        {
            cout << "Error: Invalid character in input !!! " << c << endl;
            return "";
        }
    }

    while (!s.empty())
    {
        postfix += s.top();
        postfix += ' ';
        s.pop();
    }
    return postfix;
}

// building tree implementation.........................
Tnode *buildTree(string postfix)
{
    stack<Tnode *> s;

    for (int i = 0; i < postfix.size(); i++)
    {
        char c = postfix[i];
        if (isdigit(c))
        {
            string num = "";
            while (i < postfix.size() && postfix[i] != ' ')
            {
                num += postfix[i];
                i++;
            }
            i--;
            s.push(new Tnode(num));
        }
        else if (isOperator(c))
        {
            Tnode *right = s.top();
            s.pop();
            Tnode *left = s.top();
            s.pop();

            Tnode *newNode = new Tnode(string(1, c)); // Convert char to string  ||  makes a single valued string
            newNode->left = left;
            newNode->right = right;

            s.push(newNode);
        }
    }

    return s.top(); // returns the root of tree
}

// preorder traversal to give prefix [root -> left -> right]
void preOrder_Traversal(Tnode *root)
{
    if (root == nullptr)
        return;

    cout << root->data << " ";
    preOrder_Traversal(root->left);
    preOrder_Traversal(root->right);
}

// Inorder traversal to give infix [left -> root -> right]
void inOrder_Traversal(Tnode *root)
{
    if (root == nullptr)
        return;

    inOrder_Traversal(root->left);
    cout << root->data << " ";
    inOrder_Traversal(root->right);
}

// postorder traversal to give postfix [left -> right -> root]
void postOrder_Traversal(Tnode *root)
{
    if (root == nullptr)
        return;

    postOrder_Traversal(root->left);
    postOrder_Traversal(root->right);
    cout << root->data << " ";
}