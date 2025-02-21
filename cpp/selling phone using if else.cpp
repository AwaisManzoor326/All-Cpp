//using if-else-if 
#include <iostream>
using namespace std;
int main()
{
	int range;
	cout<<"My range is : "; cin>>range;
	if(range<=35000){
		cout<<"Phone of your range is Tecno\n\t*Thank you*"<<endl;
	}
	else if (range>35000&&range<70000){
		cout<<"Phone of your range is Red mi\n\t*Thank you*"<<endl;
	}
	else if(range>70000&&range<100000){
		cout<<"Phone of your range is Vivo\n\t*Thank you*"<<endl;
	}
	else if(range>100000){
		cout<<"Phone of your range is IPhone\n\t*Thank you*"<<endl;
	}
	return 0;
	system("pause");
}