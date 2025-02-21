#include<iostream>
using namespace std;
void complement(int* array, int num)
{
    cout<<"The complement of array is: ";
    for(int i=num-1; i>=0; i--)
    {
        int compliment=array[i];
        cout<<compliment<<" ";
    }
}
int main()
{
    int num;
    cout<<"Enter number of elements in array: ";        cin>>num;
    int array[num];
    for(int i=0; i<num; i++)
    {
        cout<<"Enter element of array: ";
        cin>>array[i];
    }
    complement(array,num);
}
