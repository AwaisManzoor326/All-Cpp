// #include<iostream>
// using namespace std;

// int main()
// {
    // bitwise AND (&)
    // cout<<(4 & 1)<<endl;  // output is 0 of binary ie it gives 0 or 1


    // bitwise OR (|)
    // cout<<(4 | 1)<<endl;    // output is 5 of decimal


    // bitwise XOR (^)
    // cout<<(4 ^ 1)<<endl;       // output is 5 of decimal


    // bitwise left shift operator (<<)
    // cout<<(8 << 3)<<endl;   // output is 64 of decimal // left shift 8 ki binary ko 3 spaces pichay la jay ga or end ma 3 zero lga day ga
    // OR it will do : 8 * 2 power 3


    // bitwise right shift operator (>>)
    // cout<<(8 >> 3)<<endl;     // output is 1 of decimal  
    // right shift 8 ki binary ko 3 spaces agay shift kray ga. Memory ma space left side jati hay is liya jb right side pr number shift ho ga 
    // to us k last k numbers remove ho jayn gay jitni spaces binary agay jay ge or left pr 0's atay jayn gay 
    // OR  we can do : 8 / 2**3
//     return 0;
// }

// Questions : 1. To find a number if it is power of 2 or not
//             2.  to write a function to reverse a number
// 1 :-
#include<iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n > 0) && ((n & (n-1)) == 0);
}

int main()
{
   cout<<"Enter a number: ";
   int n;
   cin>>n;
   if(isPowerOfTwo(n))
    cout<<n<<" is power of 2"<<endl;
   else
    cout<<n<<" is not power of 2"<<endl;

   return 0;
}

//2 :-
// #include <iostream>
// using namespace std;
// int main()
// {
// 	cout<<"Enter a number: ";
// 	int n;
// 	cin>>n;
//     int tempN = n;
//     int reverse;
//     cout << "Reverse of " << n << " is ";
//     while (tempN > 0)
//     {
//         reverse = tempN % 10;
//         tempN /= 10;
//         cout<<reverse;
//     }
//     cout<<endl;
//     return 0;
// }
