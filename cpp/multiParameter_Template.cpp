#include<iostream>
using namespace std;
template<class A, class B, class C>
class test
{
    public:
    A a;
    B b;
    C c;
    test(A a, B b, C c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void display()
    {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int main()
{
    test <int, char, bool> obj(2000, 'B', true);
    obj.display();
    return 0;
}