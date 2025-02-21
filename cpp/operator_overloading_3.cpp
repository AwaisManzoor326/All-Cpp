#include <iostream>
using namespace std;
class Add
{
    private:
        int a, b;
    public:
        Add()
        {
            a=b=0;
        }
        void show()
        {
            cout<<"a= "<<a<<endl;
            cout<<"b= "<<b<<endl;
        }
        void in()
        {
            cout<<"Enter A: ";    cin>>a;
            cout<<"Enter B: ";    cin>>b;
        }
        Add operator+(Add p)
        {
            Add temp;
            temp.a= p.a + a;
            temp.b= p.b + b;
            return temp;
        }
};
int main()
{
    Add a1, a2, a3;
    a1.in();
    a2.in();
    a3 = a1 + a2;
    a1.show();
    a2.show();
    a3.show();
}

// #include <iostream>
// using namespace std;

// class Add
// {
//     private:
//         int a;
//     public:
//         Add()
//         {
//             a=0;
//         }
//         Add(int x)
//         {
//             a=x;
//         }
//         void show()
//         {
//             cout<<"a= "<<a<<endl;
//         }
//         void in()
//         {
//             cout<<"Enter A: ";    cin>>a;
//         }
//         Add operator=(Add& p)
//         {
//             a=p.a;
//             cout<<"Operator overloading started"<<endl;
//             return Add(a);
//         }
// };
// int main()
// {
//     Add a1, a2;
//     a1.in();
//     a2=a1;         // calls overloaded operator function
//     a1.show();
//     a2.show();
//     cout<<"Operator overloading ended"<<endl;
//     Add a4(100), a3=a4;      // this is same as Add a3(a2)
//     a3.show();
//     return 0;
// }
            