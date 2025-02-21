#include <iostream>
using namespace std;

class student
{
protected:
    int roll_nmber;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int n)
{
    roll_nmber = n;
}
void student ::get_roll_number()
{
    cout << "The roll numbere is " << roll_nmber << endl;
}

class exam : public student
{
protected:
    float OOP;
    float DLD;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float o, float d)
{
    OOP = o;
    DLD = d;
}
void exam ::get_marks()
{
    cout << "Marks obtained in Object Oriented Programming are " << OOP << endl;
    cout << "Marks obtained in Digital Logic & Design are " << DLD << endl;
}

class result : public exam
{
public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "The result obtained is " << (OOP + DLD) / 2 << "%" << endl;
    }
};

int main()
{
    result Awais;
    Awais.set_roll_number(16);
    Awais.set_marks(86.5, 85.6);
    Awais.display();
}