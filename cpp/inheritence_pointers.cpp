#include<iostream>
using namespace std;

int main()
{
    int a = 4003;
    
    cout<<"The vlaue of a is "<<a<<endl;
    cout<<"The vlaue of address of a is "<<&a<<endl;

    int b = 3423;
    int* ptr = &b;
    cout<<"Value of b is "<<*(ptr)<<endl;
    cout<<"Value of address of b is "<<ptr<<endl;

    // "new" keyword\operator
    float* p = new float(30.45);  //dynamically allocated float variable
    cout<<"The value at adress p is "<<*(p)<<endl;
    cout<<"The value of adress p is "<<p<<endl;

    int* arr = new int[3];   //dynamically allocated int array
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;
    cout<<"The value of adress of arr[] is "<<arr<<endl;

    // "delete" operator\keyword
    delete[] arr;
    cout<<"The value of arr[0] is "<<arr[0]<<endl;
    cout<<"The value of arr[1] is "<<arr[1]<<endl;
    cout<<"The value of arr[2] is "<<arr[2]<<endl;  // now gives garbage values

    delete p;
    cout<<"The value at adress p is "<<*(p)<<endl;   // garbage value
    return 0;
}