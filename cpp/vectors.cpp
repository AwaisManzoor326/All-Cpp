//  demonstarting vectors
#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display( vector <T> &V)
{
    for (int i = 0; i < V.size(); i++)
    {
        cout<<V.at(i)<<" ";
        // cout<<V[i]<<" ";
    }
    cout<<endl;
    
}

int main()
{
    vector <int> V1(2);
    V1.push_back(10);
    V1.push_back(20);
    V1.push_back(30);

    vector <char> V2(4); // 4 element vector
    V2.push_back('A');
    V2.push_back('B');
    V2.push_back('C');
    V2.push_back('D');
    V2.push_back('E'); // this will cause an error
    V2.push_back('F');

    vector <int> V3(4, 60); // displays 60 04 times
    // V3.push_back(5);

    vector <int> V4(V1);
    V4.push_back(5);

    display(V1);
    display(V2);
    display(V3);

    // vector <int> vec1;
    // int element, size;
    // cout<<"Enter the size of the vector: ";
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //      cout<<"Enter the element for vector: ";
    //      cin>>element;
    //      vec1.push_back(element);  // push each element in vector, so 
    //                               // you can add as many elements in vector as you can
    // }
    // cout<<"---------------------------------"<<endl;
    // display(vec1);
    // cout<<"---------------------------------"<<endl;
    // vec1.pop_back();  // delete the last element of vector
    // display(vec1);
    // cout<<"---------------------------------"<<endl;
    // vector <int> :: iterator iter = vec1.begin();
    // vec1.insert(iter, 500, 60);  // insert element at the beginning of vector 
    //                            // or at the place where we write new element
    // display(vec1);
    // vec1.insert(iter+1, 10, 90);   
    // display(vec1);
    
    return 0;
}