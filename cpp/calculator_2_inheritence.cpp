#include<iostream>
using namespace std;
#include<cmath>

class simple_calculator
{
    protected:
        float n1, n2;
    public:
        void Si_input()
        {
            cout<<".....Simple Calculator.....\n";
            cout<<"Enter number: ";   cin>>n1;
            cout<<"Enter number: ";   cin>>n2;
        }
        void Si_process()
        {
            cout<<n1<<" + "<<n2<<" = "<<n1+n2<<endl;
            cout<<n1<<" - "<<n2<<" = "<<n1-n2<<endl;
            cout<<n1<<" * "<<n2<<" = "<<n1*n2<<endl;
            cout<<n1<<" / "<<n2<<" = "<<n1/n2<<endl;
        }
};

class scientific_calculator
{
    protected:
        float n;
    public:
        void Sc_input()
        {
            cout<<".....Scientific Calculator.....\n";
            cout<<"Enter number: ";   cin>>n;
        }
        void Sc_process()
        {
            cout<<"Sin("<<n<<") = "<<sin(n)<<endl;
            cout<<"Cos("<<n<<") = "<<cos(n)<<endl;
            cout<<"Tan("<<n<<") = "<<tan(n)<<endl;
        }
};

class Hybrid_Calculator: public simple_calculator, public scientific_calculator
{

};

int main()
{
    Hybrid_Calculator obj;
    obj.Si_input();
    obj.Si_process();
    obj.Sc_input();
    obj.Sc_process();
    return 0;
}