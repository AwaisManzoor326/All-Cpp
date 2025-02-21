#include <iostream>
using namespace std;
int main ()
{
    int r,c,s;
    for(r=1;r<=11;r++){
        for(c=11;c>=r;c--)
        cout<<"*";
        for(s=6;s>=1;s--)
        cout<<" ";
        cout<<endl;
    }
      int i,j,k;;
    for(i=1;i<=11;i++){
        for(k=1;k<=i;k++)
        cout<<"*";
        for(j=1;j<=6;j++)
        cout<<" ";
        cout<<endl;
    }
    return 0;
}
