#include <iostream>
using namespace std;

class test
{
private:
    int n1, n2;

public:
    test()
    {
        n1 = n2 = 0;
    }

    void operator++()
    {
        n1++;
        n2++;
    }
    void operator++(int)
    {
        n1++;
        n2++;
    }
    void operator--()
    {
        n1--;
        n2--;
    }
    void operator--(int)
    {
        n1--;
        n2--;
    }

    void dispaly()
    {
        cout << "n1=" << n1 << endl;
        cout << "n2=" << n2 << endl;
    }
};
int main()
{
    test t1;
    t1.dispaly();
    ++t1;
    t1.dispaly();
    t1++;
    t1.dispaly();
    --t1;
    t1.dispaly();
    t1--;
    t1.dispaly();

    return 0;
}