#include <iostream>
using namespace std;
void sortAndDisplay(int ar[])
{
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(ar[i]>ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    cout<<"In Ascending order : ";
    for(int k=0; k<5; k++)
        cout<<ar[k]<<" ";
    cout<<endl;

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(ar[i]<ar[j])
            {
                int temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    cout<<"In Descending order : ";
    for(int k=0; k<5; k++)
        cout<<ar[k]<<" ";
    cout<<endl;
}

int main()
{
    int ar[5];
    cout<<"Enter five values : "<<endl;
    for(int i=0; i<5; i++)
        cin>>ar[i];
    cout<<"Unsorted values : ";
    for(int j=0; j<5; j++)
        cout<<" "<<ar[j];
        cout<<endl;
    sortAndDisplay(ar);
    return 0;
}
