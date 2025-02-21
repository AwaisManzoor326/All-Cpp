#include <iostream>
using namespace std;
class A
{
private:
    int x, y;

public:
    A()
    {
        x = 15;
        y = 30;
    }
    friend class B;
};
class B
{
public:
    void showA(A obj)
    {
        cout << "Vlaue of a is " << obj.x << endl;
    }
    void showB(A obj)
    {
        cout << "Value of B is " << obj.y << endl;
    }
};
int main()
{
    A a;
    B b;
    b.showA(a);
    b.showB(a);
}