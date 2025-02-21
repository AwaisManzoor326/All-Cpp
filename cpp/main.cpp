#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int comp[6] , math[6] ;  string nam[6] ;
    cout<<"\n\t\t\tEnter the marks out of 150 of 02 subjects :-"<<endl;
    for(int i=0 ; i<=5 ; i++)
    {
        cout<<"Name of Student : ";        cin>>nam[i];
        cout<<"Marks in Computer : ";         cin>>comp[i];
        cout<<"Marks in Mathematics : ";     cin>>math[i];
        cout<<endl;
    }
    cout<<"\n\n";
    cout<<setw(7)<<"Name"<<setw(10)<<"Computer"<<setw(13)<<"Mathematics"<<endl;
    for(int  i=0 ; i<=5 ; i++)
    {
        cout<<setw(7)<<nam[i]<<setw(10)<<comp[i]<<setw(13)<<math[i]<<endl;
    }
    return 0;
}
