// T.C is O(logn)
// S.C is O(1)


#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (target < arr[mid])  // now search in left half
        {
            end = mid - 1;
        }
        else if (target > arr[mid])  // now search in right half
        {
            start = mid + 1;
        }
        else  // target found
        {
            return mid;
        }
    }

    return -1;  //target not exists
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 17;
    int index = binarySearch(arr, target, size);
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