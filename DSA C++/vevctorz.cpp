#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};
    cout << vec1.size() << endl;
    vec1.push_back(6);
    cout << vec1.capacity() << endl;
    cout << vec1.size() << endl;
    vec1.pop_back();
    cout << vec1.size() << endl;
    cout << vec1.at(3) << endl;
    cout << vec1.front() << endl;
    cout << vec1.back() << endl;
    for (int val : vec1)
        cout << val << " ";
    cout << endl;
    return 0;
}