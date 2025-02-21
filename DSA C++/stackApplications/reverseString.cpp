#include <iostream>
using namespace std;
#include <stack>
int main()
{
    stack<char> s;
    string name;
    cout << "Enter the name : ";
    getline(cin, name);
    for (char c : name)
    {
        s.push(c);
    }
    cout << "Reverse of the name is : ";
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}