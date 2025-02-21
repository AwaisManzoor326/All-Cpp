#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    // function objects -> functors.
    int arr[] = {1,5,3,78,56,90,45,0};
    //sort(arr, arr+5);  //sort only first five element 
    // sort(arr, arr+8);  //sort the whole array (default ascending order)
    sort(arr, arr+8, greater<int>());  //sort the whole array in descending order 
    for(int i=0;i<8;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}