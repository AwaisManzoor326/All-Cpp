// counter.cpp
// object represents a counter variable
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class counter
{
private:
    unsigned int count;
public:
    counter(): count(0)
    {
      cout<<"\nI'm a constructor";      /* EMPTY BODY */
    }    //constructor
    void setcounter()
    {
        count++;
    }
    int showcounter()
    {
        return count;
    }
};
int main()
{
    counter c1,c2;
    cout<<"\n\nc1= "<<c1.showcounter();
    cout<<"\nc2= "<<c2.showcounter();

    c1.setcounter();
    c2.setcounter();
    c2.setcounter();

    cout<<"\n\nc1= "<<c1.showcounter();
    cout<<"\nc2= "<<c2.showcounter();

    cout<<endl;

    return 0;
}
