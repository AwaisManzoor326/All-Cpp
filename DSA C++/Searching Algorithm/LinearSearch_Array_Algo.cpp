#include <iostream>
using namespace std;

// Linear Search Algorithm
int linearSearch(int arr[], int sz, int trgt)
{
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] == trgt)
            return i; // found target at index i
    }
    return -1; // target not found
}

int main()
{
    int arr[] = {10, 1, 3, 5, 2, 11, 1};
    int size = sizeof(arr);
    int target = 2;
    cout << linearSearch(arr, size, target) << endl;
    return 0;
}
