// majority element vo element hay jo array ya vector ma greater than size/2 times aya ho

// Brute force approach
// not optimized one
// time complexity is quadratic

// #include <iostream>
// #include <vector>
// using namespace std;

// int Majority_Element(vector<int> vec, int size)
// {
//     for (int val : vec)
//     {
//         int freq = 0;
//         for (int el : vec)
//         {
//             if (el ==val)
//             {
//                 freq++;
//             }
//         }
//         if (freq > size / 2)
//         {
//             return val;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> Ovec = {1, 2, 1, 2, 1, 2, 2};
//     int siz = Ovec.size();
//     cout << "Majority element in vector is " << Majority_Element(Ovec, siz) << endl;
//     return 0;
// }

// brute force more optimized solution
// in this we work with sorted array
// its time complexity is O(log n)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int Majority_Element(vector<int> vec, int size)
// {
//     sort(vec.begin(), vec.end());    // to sort vector
//     int freq = 1, ans = vec[0];
//     for (int i = 1; i < size; i++)
//     {
//         if(vec[i] == vec[i-1])
//         {
//             freq ++;
//         }
//         else
//         {
//             freq = 1;
//             ans = vec[i];
//         }
//         if (freq > size / 2)
//         {
//             return ans;
//         }
//     }
//     return ans;
// }

// int main()
// {
//     vector<int> Ovec = {1, 2, 1, 2, 1, 2, 2};
//     int siz = Ovec.size();
//     cout << "Majority element in vector is " << Majority_Element(Ovec, siz) << endl;
//     return 0;
// }

// moore's voting algorithm
// most optimized solution
// tome complexity is linear
#include <iostream>
#include <vector>
using namespace std;

int Majority_Element(vector<int> vec, int size)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < size; i++)
    {
        if (freq == 0)
        {
            ans = vec[i];
        }
        if (ans == vec[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> Ovec = {1, 2, 1, 2, 1, 2, 2};
    int siz = Ovec.size();
    cout << "Majority element in vector is " << Majority_Element(Ovec, siz) << endl;
    return 0;
}