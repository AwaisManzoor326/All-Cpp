#include<iostream>
using namespace std;
class A
{
    private:
    int a;
    public:
    //A& setdata(int a)
    void setdata(int a)
    {
        this->a=a;
      //  return *this;
    }
    void show()
    {
        cout<<"The value of a is "<<a<<endl;
    }
};
int main()
{
    A a;
    a.setdata(7);
    //a.setdata(7).show();
    a.show();
    return 0;
}   