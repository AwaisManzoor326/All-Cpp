#include<iostream>
using namespace std;
class Student 
{
    string name;
    public:
    Student (string aname)
    {
        name=aname;
        cout<<"\n\t I am constructor: "<<aname<<endl;
    }
    ~Student()
    {
        cout<<"\n\t I am destructor: "<<name<<endl;
    }
};
int main(){
    Student s1("Awais");
    Student s2("Ali");
    return 0;
}