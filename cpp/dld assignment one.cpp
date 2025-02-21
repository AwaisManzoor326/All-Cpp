#include<iostream>
using namespace std;
int main()
{
	
	int x, y, z, sum, carry;
    
    	cout<<"Enter 03 binary elements (0,1) :"<<endl;
    	cin>>x>>y>>z;
	
	cout<<endl;
    
        sum=x+y+z;
        if(sum==0)
        {
        	sum=0;
        	carry=0;
		}
		else if(sum==1)
		{
			sum=1;
			carry=0;
		}
        else if(sum>1)
        {
            if(sum==2)
            {
                sum=0;
                carry=1;
            }
            else if(sum==3)
            {
                sum=1;
                carry=1;
            }
        }
    
    cout<<endl;
    cout<<" X\tY\tZ\tSum\tCarry\n";
    
        cout<<" "<<x<<'\t'<<y<<'\t'<<z<<'\t'<<sum<<'\t'<<carry<<endl; 
    
    cout<<endl;
    return 0;

}
