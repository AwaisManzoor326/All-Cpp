#include<iostream>
using namespace std;
class B;
class A
{
    private:
        int a;
    public:
        A()
        {
            a=10;
        }
        friend void show(A, B);
};
class B
{
    private:
        int b;
    public:
        B()
        {
            b=20;
        }
        friend void show(A, B);
};
void show(A x, B y)
{
    int t;
    t= x.a+ y.b;
    cout<<"Value of class A object is "<<x.a<<endl;
    cout<<"Value of class B object is "<<y.b<<endl;
    cout<<"their total is "<<t<<endl;
}
int main()
{
    A obj1;
    B obj2;
    show(obj1, obj2);
    return 0;
}