// Its time complexity is O(n square) Quadratic
// It uses Dynamic programming type of Algorithm

// Method 1
// #include <iostream>
// using namespace std;

// #define MAX 10
// int arr[MAX] = {3, 2, 5, 1, 8, 4, 9, 11, 34, 22};

// void display()
// {
//     cout << "[ ";
//     for (int i = 0; i < MAX; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << "]" << endl;
// }

// void buble_sort()
// {
//     int temp;
//     bool swapped;
//     for (int i = 0; i < MAX - 1; i++)
//     {
//         swapped = false;
//         for (int j = 0; j < MAX - 1 - i; j++)
//         {
//             cout << "\tItems compared: [" << arr[j] << ", " << arr[j + 1] << "]";
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//                 swapped = true;
//                 cout << " => Swapped: [" << arr[j] << ", " << arr[j + 1] << "]" << endl;
//             }
//             else
//             {
//                 cout << " => Not Swapped!!" << endl;
//             }
//         }
//         if (!swapped)
//         {
//             break;
//         }
//         cout << "iteratioin # " << i + 1 << ": ";
//         display();
//     }
// }

// int main()
// {
//     cout << "Original Array: " ;
//     display();
//     cout << ":: Sorting :: " << endl;
//     buble_sort();
//     cout<<"\nSorted Array : ";
//     display();
//     return 0;
// }
// /////////////////////////////////////////////////////////////////////////////////////////////////////
// Method 2
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