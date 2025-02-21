#include<iostream>
using namespace std;
int main()
{
    int x[7], y[7], z[7], sum[7], carry[7];
    for(int l=0; l<8; l++)
    {
    	cout<<"Enter 03 binary elements :"<<endl;
    	cin>>x[l]>>y[l]>>z[l];
	}
	cout<<endl;
    for(int i=0; i<8; i++)
    {
        sum[i]=x[i]+y[i]+z[i];
        if(sum[i]==0)
        {
        	sum[i]=0;
        	carry[i]=0;
		}
		else if(sum[i]==1)
		{
			sum[i]=1;
			carry[i]=0;
		}
        else if(sum[i]>1)
        {
            if(sum[i]==2)
            {
                sum[i]=0;
                carry[i]=1;
            }
            else if(sum[i]==3)
            {
                sum[i]=1;
                carry[i]=1;
            }
        }
    }
    cout<<endl;
    cout<<" X\tY\tZ\tSum\tCarry\n";
    for(int k=0; k<8; k++)
    {
        cout<<" "<<x[k]<<'\t'<<y[k]<<'\t'<<z[k]<<'\t'<<sum[k]<<'\t'<<carry[k]<<endl; 
    }
    cout<<endl;
    return 0;
}