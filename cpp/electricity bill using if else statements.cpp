#include <iostream>
using namespace std;
int main()
{
	int units;
	cout<<"enter units : ";	cin>>units;
	if(units<=200){
		cout<<"\ayou have to pay Rs 2000"<<endl;
	}
	else if(units<=300){
		cout<<"\ayou have to pay Rs "<<(units-200)*10+2000<<endl;
	}
	else if(units<=400){
		cout<<"\ayou have to pay Rs "<<(units-300)*15+3000<<endl;
	}
	else if(units>400){
		cout<<"\ayou have to pay Rs "<<(units-400)*25+4500<<endl;
	}
	return 0;
	system("pause");
}