#include<iostream>
using namespace std; 

class Base1 
{
    protected:
        int basevariable1;
    public:
        Base1(int n): basevariable1(n)
        {          
            cout<<"Base1 constructor called"<<endl;
        }
};

class Base2
{
    protected:
        int basevariable2;
    public:
        Base2(int m): basevariable2(m)
        {
            cout<<"Base2 constructor called"<<endl;
        }
};

class Derived: public Base1, public Base2
{
    private:
        int d1, d2;
    public:
        Derived(int a, int b, int c,int d): Base1(a), Base2(b), d1(c), d2(d)
        {
            cout<<"Derived class constructor called"<<endl;
        }
};

int main()
{
    Derived obj(23,34,45,56);
    return 0;
    
}
/*
sequence of constructor's call :-
In inheritence, base class constructor is always called 1st.
In multiple, multfile inheritrnce, base class constructors called 1st but in the sequence they 
are inherited to dereived class.
If there is virtual base class, then it will be given higher priority.
*/