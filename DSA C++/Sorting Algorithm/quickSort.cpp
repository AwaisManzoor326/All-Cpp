// It is based on divide and conquer algorithm

#include <iostream>
using namespace std;
#define MAX 10


class QuickSort
{
private:
    int arr[MAX];
    int size;

public:
    QuickSort()
    {
    }
    QuickSort(int ar[])
    {
        arr[MAX] = ar[MAX];
        size = sizeof(arr) / sizeof(arr[0]);
        cout << "Unsorted list : ";
        display();
        Sort();
        cout << "Sorted list   : ";
        display();
    }
    void Sort()
    {
        
    }
    void display()
    {
        cout << "[";
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << "]" << endl;
    }
};

int main()
{
    int arr[] = {3, 6, 1, 9, 2, 5, 9, 4, 7};
    QuickSort obj(arr);

    return 0;
}