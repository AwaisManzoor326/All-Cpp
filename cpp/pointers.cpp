#include <iostream>
using namespace std;
int main()
{
	/* what is pointer ? ----> it is actually a data type which holds         
	 adress of other data types*/
	int a=16 , * b=&a;
	// & ---> adress operator
	// * ---> (value at) dereference operator 
	cout<<"The adress of a is "<<&a<<endl;
		cout<<"The adress of a is "<<b<<endl;
			cout<<"Value stored in a is "<<*b<<endl;
			//pointer to pointer
			int** c=&b;
			cout<<"Adress of b is "<<&b<<endl;
			cout<<"Adress of b is "<<c<<endl;
			cout<<"Value of Adress b is "<<*c<<endl;
			cout<<"Value at Adress at adress b is "<<**c<<endl;
			cout<<"Value at Adress a is "<<*b<<endl;
		
	return 0;
}