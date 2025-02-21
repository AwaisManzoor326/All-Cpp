#include<iostream>
using namespace std;
class count
{
    private:
        int n;
    public:
        count()
        {   n=0;     }
        void show()
        {
            cout<<"n= "<<n<<endl;
        }
        count operator++()
        {
            count temp;
            n= n+ 1;
            temp.n= n;
            return temp;
        }
         count operator++(int)
        {
            count temp;
            n= n+ 1;
            temp.n= n;
            return temp;
        }
};
int main()
{
    count c1;
    c1.show();
    ++c1;   ++c1;
    c1.show();
    c1.operator++();
    c1.show();
    count c2;
    c2= ++c1;
    c1.show();
    c2.show();
    c2++;
    c2.show();
}