#include <iostream>
using namespace std;

class BaseClass
{
public:
    int b_var = 4;
    virtual void show()
    {
        cout << "Displaying Base class variable " << b_var << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int d_var = 5;
    void show()
    {
        cout << "Displaying Base class variable " << b_var << endl;
        cout << "Displaying Derived class variable " << d_var << endl;
    }
};

int main()
{
    BaseClass *b_ptr;
    BaseClass b_obj;
    DerivedClass d_obj;
    b_ptr = &d_obj;
    b_ptr->show();

    return 0;
}