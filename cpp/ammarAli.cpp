#include <iostream>
using namespace std;

class person
{
private:
    string cnic;
    string name;

public:
    person() : cnic("0"), name("NULL")
    {
    }
    person(string CNIC, string nam) : cnic(CNIC), name(nam)
    {
    }
    void set()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter CNIC: ";
        cin >> cnic;
    }
    string displayName()
    {
        return name;
    }
    string displayCNIC()
    {
        return cnic;
    }
    void eat()
    {
        cout << name << " is eating.\n";
    }
    void walk()
    {
        cout << name << " is walking.\n";
    }
};

class student : public person
{
private:
    int Rollno;
    float CGPA;

public:
    student(string c, string n, int r, float C) : person(c, n), Rollno(r), CGPA(C)
    {
    }
    void rollno()
    {
        cout << "Your roll no is " << Rollno << endl;
    }
    void exam();
    void quiz();
    void Cgpa();
};

void student ::exam()
{
    cout << "Roll no " << Rollno << " " << displayName() << " is giving Exam.\n";
}

void student ::quiz()
{
    cout << "Roll no " << Rollno << " " << displayName() << " is giving Quiz.\n";
}

void student ::Cgpa()
{
    cout << "Roll no " << Rollno << " " << displayName() << " got CGPA " << CGPA << endl;
}

int main()
{
    student s1("82203-0578580-5", "Awais", 16, 3.9);
    cout << "Your name is " << s1.displayName() << endl;
    cout << "Your CNIC is " << s1.displayCNIC() << endl;
    s1.rollno();
    s1.exam();
    s1.quiz();
    s1.Cgpa();

    student s2("82203-0578580-9", "Ammar", 20, 3.8);
    s2.set();

    return 0;
}