#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class base3
{
protected:
    int base3int;

public:
    void set_base3int(int c)
    {
        base3int = c;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The value of base1int is " << base1int << endl;
        cout << "The value of base2int is " << base2int << endl;
        cout << "The value of base3int is " << base3int << endl;
        cout << "The sum of these values is " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    derived obj;
    obj.set_base1int(100);
    obj.set_base2int(345);
    obj.set_base3int(34);
    obj.show();
    return 0;
}