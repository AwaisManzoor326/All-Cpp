#include<iostream>
using namespace std;

// #define MAX 8
int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

void display()
{
    cout<<"[ ";
    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<" ]"<<endl;
}

int bubleSort()
{
    int temp;
    bool swapped;
    for(int i = 0; i < (sizeof(arr)/sizeof(arr[0]))-1; i++)
    {
        cout<<"\t:: Iteration # "<<i<<" :: ";
        swapped = false;
        for(int j = (sizeof(arr)/sizeof(arr[0]))-1; j > i; j--)
        {
            if(arr[j] < arr[j-1])
            {
                swap(arr[j], arr[j-1]);
                swapped = true;
            }
        }
        display();
        if(!swapped)
        {
            break;
        }
    }

}

int main()
{
    cout<<":: Before :: ";
    display();
    bubleSort();
    cout<<":: After :: ";
    display();
    return 0;
}