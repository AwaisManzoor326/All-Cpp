///////////////////////////////////////////////////////////////////////////////////////////////
// Find() algorithm...........................
//  #include <iostream>
//  #include <algorithm>
//  using namespace std;

// int main()
// {
//     int arr[] = {2, 3, 6, 10, 22, 45, 123, 67, 435};
//     int *ptr;
//     ptr = find(arr, arr + 9, 45);             //It finds the occurence of 45 using find() function
//     cout << "45 found at position " << ptr - arr << endl;
//     bool b = false;
//     for (int i = 0; i < 9; i++)          // finds using for-loop
//     {
//         if (arr[i] == 123)
//         {
//             cout << "123 found at position " << i << endl;
//             b = true;
//         }
//     }
//     if (b == false)
//         cout << "No such element exists!!!" << endl;
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////
// Count() Alhorithm.....................................
// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int counter=0;
//     int arr[] = {12, 2, 4, 65, 2, 45, 12, 46, 12, 67, 23, 12};
//     int n = count(arr, arr+12, 12);         // count the number  of occurences of 12 uisng count Algorithm
//     cout << "Count of 12 is " << n << endl;
//     for(int i = 0; i<12; i++)          //using for-loop
//     {
//         if(arr[i]==2)
//             counter++;
//     }
//     cout << "Count of 2 is " << counter << endl;
//     return 0;
// }
///////////////////////////////////////////////////////////////////////////////////////////////