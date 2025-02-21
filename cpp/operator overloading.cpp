#include<iostream>
using namespace std;
class count
{
    private:
        int n;
    public:
        count(): n(0)
        {           }
        void show()
        {
            cout<<"The value of n is "<<n<<endl;
        }
        void operator ++()
        {
            n++;
        }
};
int main()
{
    count c1;
    c1.show();
    ++c1;       ++c1;       ++c1;
    c1.show();
    c1.operator++();
    c1.show();
}