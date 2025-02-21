#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int n)
    {
        roll_no = n;
    }
    void display_roll_no()
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};

class Exam : virtual public Student
{
protected:
    float OOP, DLD;

public:
    void set_marks(float o, float d)
    {
        OOP = o;
        DLD = d;
    }
    void display_marks()
    {
        cout << "Your result is: " << endl
             << "Object Oriented Programming = " << OOP << endl
             << "Digital Logic and Design = " << DLD << endl;
    }
};
class Sports : virtual public Student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void display_score()
    {
        cout << "Your score in PT is " << score << endl;
    }
};

class Result : public Exam, public Sports
{
public:
    float total;

public:
void display()
{
    total = OOP + DLD + score;
    display_roll_no();
    display_marks();
    display_score();
    cout << "Your total = " << total <<"/210"<< endl;
}
};

int main()
{
    Result Awais;
    Awais.set_roll_no(16);
    Awais.set_marks(95.6, 90.4);
    Awais.set_score(6);
    Awais.display();
    return 0;
}