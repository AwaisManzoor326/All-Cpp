#include <iostream>
using namespace std;
class test
{
    private:
        static int n;
    public:
        static void show()
        {
            cout<<"The value of n is "<<n<<endl;
        }
};
int test::n=10;
int main()
{
    test::show();
    return 0;
}