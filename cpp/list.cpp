#include<iostream>
#include<list>
using namespace std;

void display(list<int> lst)
{
    list<int>::iterator it;
    for (it=lst.begin(); it!=lst.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list <int> list1; //zero length list
    list1.push_back(1);    
    list1.push_back(1);    
    list1.push_back(1);    
    list1.push_back(3);    
    list1.push_back(14);    
    list1.push_back(5);    
    list1.push_back(6);    
    display(list1);

    // sorting
    /* list1.sort();
    display(list1);*/

    // remove functions
    /* list1.pop_back(); //remove the last element
    display(list1);
    list1.pop_front(); // remove the first element
    display(list1);
    list1.remove(1); //remove all occurences of given element
    display(list1);*/

    list<int> list2(3); // list of length 3
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=23;
    iter++;
    *iter=45;
    iter++;
    *iter=12;
    iter++;
    display(list2);

    // merge function
    /*list1.merge(list2);
    display(list1);*/

    // reverse function
    /*list2.reverse();
    display(list2);*/
    return 0;
}