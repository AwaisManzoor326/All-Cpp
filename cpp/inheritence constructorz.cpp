#include<iostream>
using namespace std;
class Parent{
public:

	Parent(int i){cout << i<<
		"Parent Constructor...";}
	
};
class Child : public Parent{
public:
	Child(int i):Parent(i)
	{cout << i<<"Child Constructor...";}
	
};
int main()
{
    Parent p1(11);
    Child c1(12);
    return 0;
}