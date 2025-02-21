#include<iostream>
using namespace std;
class counter
{
    protected:
        unsigned int count;
    public:
        counter() : count(0)   {  }
        counter (int c): count(c)   {   }
        unsigned int get_count() const
        {
            return count;
        }
        counter operator ++()
        {
            return counter(++count);
        }
};
class countdm:public counter
{
    public:
        counter operator --() 
        {
            return counter(--count);
        }
};
int main()
{
    countdm c1;
    cout<<"\n\tCounter: "<<c1.get_count();
    ++c1;       ++c1;       ++c1;       ++c1;
    cout<<"\n\tCounter: "<<c1.get_count();
    --c1;       --c1;
    cout<<"\n\tCounter: "<<c1.get_count()<<endl;
    system("pause");
    return 0;
}
