// Most optimized
// T.C & S.C is O(logn)

#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int st, int end)
{
    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (target < arr[mid]) // now search in left half
        {
            return binarySearch(arr, target, st, mid - 1);
        }
        else if (target > arr[mid]) // now search in right half
        {
            return binarySearch(arr, target, mid + 1, end);
        }
        else  // target found
        {
            return mid;
        }
    }

    return -1;  // target not exists
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;
    int index = binarySearch(arr, target, 0, size - 1);
    if (index == -1)
    {
        cout << "Element is not present in array";
    }
    else
    {
        cout << "Target " << target << " found at index " << index << " of array." << endl;
    }
    return 0;
}