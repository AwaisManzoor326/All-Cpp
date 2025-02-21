// find all the subArrays of array
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int start = 0; start < len; start++)
    {
        for (int end = start; end < len; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}
*/

// Sum of max subarray
// using brute force algorithm
// it takes time of O(n square) Quadratic
/*
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT8_MIN;
    for (int start = 0; start < len; start++)
    {
        int currentSum = 0;
        for (int end = start; end < len; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }
    cout << "Maximum SubArray Sum is " << maxSum << endl;
    return 0;
}
*/

// Maximum SubArray Sum using Kadane's Algorithm
// its logic is that when a maxNum becomes negative we reset it to 0
// its time complexity is O(n) Linear
// it comes in dynamic programming type of Algirithms
// leetcode problem 53
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -4, -5, 6, -7, 8, -9, -10};
    int len = sizeof(arr) / sizeof(arr[0]);
    int maxSum = INT8_MIN;
    for (int start = 0; start < len; start++)
    {
        int currentSum = 0;
        for (int end = start; end < len; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
            if (currentSum < 0)
                currentSum = 0;
        }
    }
    cout << "Maximum SubArray Sum is " << maxSum << endl;
    return 0;
}