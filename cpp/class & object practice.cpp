#include <iostream>

using namespace std;
class practice
{
private:
    int rollno;
    float cgpa;
private:
    void getrollno(int r)
    {
        rollno=r;
    }
    void showrollno()
    {
        cout<<"\n\n\n\t\tRoll No. = "<<rollno<<endl;
    }
    void getcgpa(float c)
    {
        cgpa=c;
    }
    void showcgpa()
    {
        cout<<"\t\tCGPA = "<<cgpa<<endl<<endl;
    }
};
int main()
{
	practice p1,p2,p3,p4,p5;

	p1.getrollno(16);
	p1.showrollno();
	p1.getcgpa(3.9);
	p1.showcgpa();

	p2.getrollno(17);
	p2.showrollno();
	p2.getcgpa(3.8);
	p2.showcgpa();

	p3.getrollno(18);
	p3.showrollno();
	p3.getcgpa(3.7);
	p3.showcgpa();

	p4.getrollno(19);
	p4.showrollno();
	p4.getcgpa(4.0);
	p4.showcgpa();

	p5.getrollno(20);
	p5.showrollno();
	p5.getcgpa(3.5);
	p5.showcgpa();

	system("pause");
	return 0;
}
