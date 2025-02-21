#include <iostream>
using namespace std;
class operations
{
private:
    int a, b;

public:
    operations()
    {
        a = b = 0;
    }
    void show()
    {
        cout << "\ta= " << a << endl;
        cout << "\tb= " << b << endl;
    }
    void in()
    {
        cout << "Enter A: ";
        cin >> a;
        cout << "Enter B: ";
        cin >> b;
    }

    operations operator+(operations p)
    {
        operations temp;
        temp.a = a + p.a;
        temp.b = b + p.b;
        return temp;
    }

    operations operator-(operations p)
    {
        operations temp;
        temp.a = a - p.a;
        temp.b = b - p.b;
        return temp;
    }

    operations operator*(operations p)
    {
        operations temp;
        temp.a = a * p.a;
        temp.b = b * p.b;
        return temp;
    }

    operations operator/(operations p)
    {
        operations temp;
        temp.a = a / p.a;
        temp.b = b / p.b;
        return temp;
    }

    operations operator%(operations p)
    {
        operations temp;
        temp.a = a % p.a;
        temp.b = b % p.b;
        return temp;
    }
};
int main()
{
    operations a1, a2, a3;
    a1.in();
    a2.in();
    a3 = a1 + a2;
    // a1.show();
    // a2.show();
    cout << "Addition:\n";
    a3.show();
    a3 = a1 - a2;
    cout << "Subtraction:\n";
    a3.show();
    a3 = a1 * a2;
    cout << "Multiplication:\n";
    a3.show();
    a3 = a1 / a2;
    cout << "Division:\n";
    a3.show();
    a3 = a1 % a2;
    cout << "Remainder:\n";
    a3.show();

    return 0;
}
