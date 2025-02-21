// #include<iostream>
// using namespace std;

// class base1
// {
//     public:
//     void greet()
//     {
//         cout<<"Hy...How are you?"<<endl;
//     }
// };

// class base2
// {
//     public:
//     void greet()
//     {
//         cout<<"Hello...Kasay ho?"<<endl;
//     }
// };

// class derived : public base1, public base2
// {
//     public:
//     void greet()
//     {
//         base1::greet();
//     }
// };

// int main()
// {
//     derived d;
//     d.greet();
//     return 0;
// }

#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"Base"<<endl;
    }
};
class B : public A
{
    public:
    void show()
    {
        A::show();
        cout<<"Derived\n";
    }
};

int main()
{
    B b;
    b.show();
    return 0;
}