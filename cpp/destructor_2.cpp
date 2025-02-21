#include <iostream>
using namespace std;
int count;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when our constructor is called for object " << count << endl;
    }
    ~num()
    {
        cout << "This is the time when our destructor is called for object " << count << endl;
        count--;
    }
};
int main()
{
    cout << "Entering main" << endl;
    num n1;
    {
        cout << "Entering block" << endl;
        cout << "Creating two objects in block" << endl;
        num n2, n3;
        cout << "Now exiting block.\nYou can see that the scope of n2 & n3 is only block" << endl;
    }
    cout << "Now exiting the main function" << endl;
}