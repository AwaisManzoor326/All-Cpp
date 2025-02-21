#include<iostream>
#include<graphics.h>
using namespace std;
class person
{
    private:
        string name;
       string cnic;
    public:
        void setname(string nam)
        {
            name=nam;
        }
        void setcnic()
        {
            string cniC;
            cin>>cniC;
            cnic=cniC;
        }
        string getname()
        {
            return name;
        }
        string getcnic()
        {
            return cnic;
        }
};
int main()
{
    person p1,p2,p3;
    p1.setname("Awais");
    p1.setcnic();
    cout<<"\n\tNAME : "<<p1.getname()<<"\tCNIC : "<<p1.getcnic()<<endl;
}
