#include <iostream>
using namespace std;
int main()
{
	float hardness,carbonContent, tensileStrength;
	cout<<"Enter Hardness of Steel: ";
	cin>>hardness;
	cout<<"Enter Carbon Content of Steel: ";
	cin>>carbonContent;
	cout<<"Enter tensile Strength of Steel: ";
	cin>>tensileStrength;
	if(hardness > 50 && carbonContent < 0.7)
	{
		cout<<"Grade is 9";
	}
	else if(carbonContent < 0.7 && tensileStrength > 5600)
	{
	  cout<<"Grade is 8";	
	}
		else if(hardness > 50 && tensileStrength > 5600)
	{
	  cout<<"Grade is 7";	
	}
			else if(hardness > 50 || tensileStrength > 5600 || carbonContent < 0.7)
	{
	  cout<<"Grade is 6";	
	}
	else
	{
		cout<<"Grade is 5";	
	}
	return 0;
}
