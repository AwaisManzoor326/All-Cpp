#include<iostream>
#include<string>
using namespace std;
class person
{
    string name;
    int age;
    public:
    
        person(string n, int a): name(n), age(a)    
        {       }
        void set_details()
        {
            cout<<"Enter name: ";   cin>>name;
            cout<<"Enter age: ";    cin>>age;
        }
        void set_by_argument(string na, int ag)
        {
            name=na;
            age=ag;
        }
        void get_details()
        {
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
        }
};
int main()
{
    person p1("Awais", 19);
    p1.get_details();
    p1.set_details();
    p1.get_details();
    p1.set_by_argument("Asfand", 21);
    p1.get_details();
}