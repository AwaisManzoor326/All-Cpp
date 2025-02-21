// faster than buble sort
// Quadratic time complexity in worst case
#include <iostream>
using namespace std;

void display(int list[], int size)
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << list[i] << " ";
    cout << "]" << endl;
}

void InsertionSort(int list[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int current = list[i];
        int j = i - 1;
        while (list[j] > current && j >= 0)
        {
            list[j + 1] = list[j];
            j--;
        }
        list[j + 1] = current;
    }
}

int main()
{
    int sz;
    cout << "Enter size of array: ";
    cin >> sz;
    int arr[sz];
    cout << "Enter elements: ";
    for (int i = 0; i < sz; i++)
        cin >> arr[i];

    cout << "\t:::INSERTION SORT:::\n";
    cout << ":: Unsorted List :: ";
    display(arr, sz);
    cout << "---------------SORTING---------------" << endl;
    cout << ":: Sorted List :: ";
    InsertionSort(arr, sz);
    display(arr, sz);

    return 0;
}