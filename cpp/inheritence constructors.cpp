#include<iostream>
using namespace std;
class parent
{
    public:
        parent()
        {
            cout<<"\t Parent constructor is called.........."<<endl;
        }
};
class child : public parent
{
    public:
    child()
    {
        cout<<"\tChild constructor is called................."<<endl;
    }
};
int main()
{
    child c1;
}