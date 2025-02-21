#include<iostream>
using namespace std;
class employee
{
    public:
        int ID;
        float salary;
    public:
        employee(): ID(0), salary(0)  {   }
        employee(int id, float salry): ID(id), salary(salry)   {   }
        void setsalary(int slary)
        {
            salary=slary;
        }
        void setID(int id)
        {
            ID=id;
        }
        float getdetails()
        {
            cout<<"\n\tID is "<<ID<<"\n\tSalary is "<<salary<<endl;
        }
};
class clerk: public employee
{
    private:
        bool computerliteracy;
    public:
        clerk(): computerliteracy(1) {  }
        bool getliteracy()
        {
            cout<<"\tComputer Literacy "<<computerliteracy<<endl;
        }
};
int main()
{
    employee e1(10,40000);
    e1.getdetails();
    clerk c1;
    c1.setsalary(30000);
    c1.setID(11);
    c1.getdetails();
    c1.getliteracy();
}