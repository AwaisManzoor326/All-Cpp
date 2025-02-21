#include<iostream>
using namespace std;

class BaseClass
{
    public:
    int a;
    void show()
    {
        cout<<"Base class variable = "<<a<<endl;
    }
};

class DerivedClass : public BaseClass
{
    public:
    int b;
    void show()
    {
        cout<<"Base class variable = "<<a<<endl;
        cout<<"Derived class variable = "<<b<<endl;
    }
};

int main()
{
    BaseClass * base_pointer;
    BaseClass base_obj;
    base_pointer = &base_obj;
    base_pointer->a=100;
    base_pointer->show();

    DerivedClass * derived_pointer;
    DerivedClass derived_obj;
    derived_pointer = &derived_obj;
    derived_pointer->a=1000;
    derived_pointer->b=2000;
    derived_pointer->show();

    return 0;
}