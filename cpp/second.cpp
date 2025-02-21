#include<iostream>
using namespace std;
int main()
{
    int arr[4];
    for(int i=0; i<4; i++)
     {
        cout<<"Enter element of array "<<i+1<<": ";
                cin>>arr[i];
     }
     cout<<"You Entered :";
     for(int j=0; j<4; j++)
     {
        cout<<arr[j]<<" ";
     }
     return 0;
}