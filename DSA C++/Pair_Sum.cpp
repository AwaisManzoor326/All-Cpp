// Brute force approach
// not optimized approach
// time complexity ==> O(n square) quadratic because it uses two loops
// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> Pair_Sum(vector<int> vec, int target, int size)
// {
//     vector<int> ans;
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (vec[i] + vec[j] == target)
//             {
//                 ans.push_back(vec[i]);
//                 ans.push_back(vec[j]);
//                 return ans;
//             }
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int target = 10;
//     int n = vec.size();
//     vector<int> result = Pair_Sum(vec, target, n);
//     cout << " Pair of " << result[0] << " + " << result[1] << " makes target of " << target << endl;

//     return 0;
// }

// using 02 pointers approach
// used when we know our list is sorted
// most optimized method
// timw complexity is O(n)  Linear
#include <iostream>
#include <vector>
using namespace std;

vector<int> Pair_Sum(vector<int> vec, int target, int size)
{
    vector<int> ans;
    int i = 0, j = size - 1;
    while (i < j)
    {
        int pairSum = vec[i] + vec[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(vec[i]);
            ans.push_back(vec[j]);
            return ans;
        }
    } 
    return ans;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 10;
    int n = vec.size();
    vector<int> result = Pair_Sum(vec, target, n);
    cout << " Pair of " << result[0] << " + " << result[1] << " makes target of " << target << endl;

    return 0;
}