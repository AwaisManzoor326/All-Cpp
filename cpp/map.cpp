#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map <string, float> marksMap;

    marksMap["Awais"] = 98.6;
    marksMap["Alima"] = 88.5;
    marksMap["Ali"] = 90.2;
    marksMap.insert({{"Amna", 70}, {"Attaullah", 75}});

    map<string, float>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }

    cout<<"Size of current map is: "<<marksMap.size()<<endl;
    cout<<"Max size of a map is: "<<marksMap.max_size()<<endl;
    
    return 0;
}