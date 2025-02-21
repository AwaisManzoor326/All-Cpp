#include <iostream>
using namespace std;

class simple_calculator
{
    protected:
    int n1;
    int n2;
    char c;
    public:
    simple_calculator()
    {                 }
    void wellcome()
    {
        cout<<"\n\n\t\t*****Wellcome to Simple Calculator*****\n";
        input_values();
    }
    void input_values()
    {
        cout<<"Enter value ";       cin>>n1;
        cout<<"Enter operator ";    cin>>c;
        cout<<"Enter value ";       cin>>n2;
        implementation();
    }
    void implementation()
    {
        if(c=='+')
        sum();
        else if(c=='-')
        subtract();
        else if(c=='*')
        multiply();
        else if(c=='/')
        divide();
        else if(c=='%')
        modulus();
        else
        {
            cout<<"...Invalid Operator...ERROR..."<<endl;
        }
    }
    void sum()
    {
        cout<<n1<<" + "<<n2<<" = "<<n1 + n2<<endl;
    }
    void subtract()
    {
        cout<<n1<<" - "<<n2<<" = "<<n1 - n2<<endl;
    }
        void multiply()
    {
        cout<<n1<<" * "<<n2<<" = "<<n1 * n2<<endl;
    }
        void divide()
    {
        cout<<n1<<" / "<<n2<<" = "<<n1 / n2<<endl;
    }
    void modulus()
    {
        cout<<n1<<" % "<<n2<<" = "<<n1 % n2<<endl;
    }
};
int main()
{
    int c;
    cout << "\n\n\t\t*****Wellcome to Calculator Program*****\n\n";
    cout << "\tWhich claculator you want to use \n\t1. Simple calculator\n\t2. Scientific calculator\n";
    cout << "Please enter yout choice ";
    cin >> c;
    simple_calculator obj;
    if(c==1)
    obj.wellcome();
    else
    cout<<"...Invalid Value...ERROR..."<<endl;
    return 0;
}