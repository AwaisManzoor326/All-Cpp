// #include<iostream>
// using namespace std;

// int main()
// {
//     int sum = 0;
//     for (int i = 50; i<=100; i++)
//     {
//         if(i%9 == 0)
//         {
//             sum += i;
//         }
//     }
//     cout<<"Sum is "<<sum<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;

void triangle()
{
    for(int i = 1; i < 6 ; i++ )
    {

        for(int j = 1; j < i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    triangle();

    return 0;
}