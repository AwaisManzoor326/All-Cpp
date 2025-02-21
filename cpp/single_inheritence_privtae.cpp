#include <iostream>
using namespace std;

class base // parent class------------------------------------------
{
private:
    int data1; // private data......
public:        // public members and data.....
    int data2;
    void setdata()
    {
        data1 = 100;
        data2 = 150;
    }
    int getdata1(); // declaration.....
    int getdata2(); // declaration......
};

int base ::getdata1() // base class function definition...
{
    return data1;
}

int base ::getdata2() // base class function definition...
{
    return data2;
}

class derived : private base // Child class-----------------private mode of visibility-----------------------
{
private: // private data.....
    int data3;

public:            // public members......
    int process(); // declarations.....
    int display(); // declaration......
};

int derived ::process() // derived class function definition.....
{
    setdata();
    data3 = data2 * getdata1();
}

int derived ::display() // derived class function definition.....
{
    cout << "The value of data1 is " << getdata1() << endl;
    cout << "The value of data2 is " << data2 << endl;
    cout << "The value of data3 is " << data3 << endl;
}

int main() // main function-------------------------------------------------
{
    derived der;
    // der.setdata();
    der.process();
    der.display();
    return 0;
}