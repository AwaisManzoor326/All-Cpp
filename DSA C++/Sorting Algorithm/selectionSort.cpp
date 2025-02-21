// its time complexity is quadratic O(n^2)

#include <iostream>
using namespace std;

int arr[] = {2, 5, 3, 8, 1, 6};
int size = sizeof(arr) / sizeof(arr[0]);

void display()
{
    cout << "[ ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}

void selectionSort()
{
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main()
{
    cout << "\t:::SELECTION SORT:::\n";
    cout << ":: Unsorted List :: ";
    display();
    cout << "---------------SORTING---------------" << endl;
    cout << ":: Sorted List :: ";
    selectionSort();
    display();

    return 0;
}