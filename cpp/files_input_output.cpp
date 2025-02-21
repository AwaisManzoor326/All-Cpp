#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    string st;
    string strng = "Awais";
    ofstream out("files.txt");
    out<<"Hello World\nI am a file " + strng<<endl;
    //out<<"Hello World\nI am a file " << strng<<endl;
    out.close();

    ifstream in("files.txt");
    getline(in, st);
    cout<<st<<endl;
    getline(in, st);
    cout<<st<<endl;
    in.close();
    return 0;
}