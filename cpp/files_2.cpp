#include<iostream>
using namespace std;
#include<fstream>
#include<string>
int main()
{
    
    ofstream out;
    out.open("files.txt");
    out<<"Hello World\nI am Awais\nWritting program in file\nthank you..."<<endl;
    out.close();

    ifstream in;
    in.open("files.txt");
    string str;
    while(!in.eof())
    {
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();
    return 0;
}