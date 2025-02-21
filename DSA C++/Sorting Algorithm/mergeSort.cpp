// Divide and conquer
// O(nlogn)
#include <iostream>
using namespace std;

// Conquer.......
void merge(int arr[], int left, int mid, int right)
{
    // find size of subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // make temporary arrays
    int LA[n1], RA[n2];

    // extract data to temporary arrays
    for (int i = 0; i < n1; i++)
        LA[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        RA[j] = arr[mid + 1 + j];

    // merge temporary arrays by sorting them
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
        arr[k++] = (LA[i] <= RA[j]) ? LA[i++] : RA[j++];

    // check if any number is left in any array
    while (i < n1)
        arr[k++] = LA[i++];
    while (j < n2)
        arr[k++] = RA[j++];
}

// Divide...........
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // divide the array by mid point
        int mid = l + (r - l) / 2;

        // recursion :: call itself while array consists of only one element
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // merge
        merge(arr, l, mid, r);
    }
}

void printArray(int arr[], int size)
{
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

int main()
{
    int arr[] = {3, 6, 1, 4, 2, 9, 5, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array  : ";
    printArray(arr, size);

    return 0;
}