#include<iostream>
using namespace std;
///////////////////////////////////////////////
class swap2;
class swap1
{
private:
    int n1;
public:
    void n_1(int a)
    {
        n1 = a;
    }
    void display(void)
    {
        cout<<n1;
    }
    friend void swap_1_2(swap1 &, swap2 &);
};
///////////////////////////////////////////////
class swap2
{
private:
    int n2;
public:
    void n_2(int a)
    {
        n2 = a;
    }
    void display(void)
    {
        cout<<n2;
    }
    friend void swap_1_2(swap1 &, swap2 &);
};
///////////////////////////////////////////////
void swap_1_2(swap1 &x, swap2 &y)
{
    int temp;
    temp=x.n1;
    x.n1=y.n2;
    y.n2=temp;
}
///////////////////////////////////////////////
int main()
{
    swap1 s1;
    s1.n_1(15);
    cout<<"Before swap, s1= "; s1.display();
    swap2 s2;
    s2.n_2(25);
    cout<<"\ts2= ";  s2.display();    
    swap_1_2(s1, s2);
    cout<<"\nAfter swap,  s1= ";
    s1.display();
    cout<<"\ts2= ";
    s2.display();
   return 0;
}