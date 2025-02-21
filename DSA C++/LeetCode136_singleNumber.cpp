#include <iostream>
#include <vector>
using namespace std;
class Number
{
    vector<int> vec;

public:
    Number(vector<int> &v) : vec(v)
    {
    }
    void SingleNumber()
    {
        int ans = 0;
        for (int val : vec)
        {
            ans ^= val;
        }
        cout << "Single value in [ ";
        for (int val : vec)
        {
            cout << val << " ";
        }
        cout << "] is " << ans << endl;
    }
};
int main()
{
    vector<int> vc = {1, 1, 3, 2, 4, 3, 2, 6, 9, 9, 6};
    Number n(vc);
    n.SingleNumber();

    return 0;
}