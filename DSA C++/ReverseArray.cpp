#include <iostream>
using namespace std;

void ReverseArray(int arr[], int sz)
{
    int start = 0;
    int end = sz - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int sz = sizeof(arr) / sizeof(arr[0]);

    cout << "before :\n\t";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    ReverseArray(arr, sz);

    cout << "after :\n\t";
    for (int i = 0; i < sz; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}