#include <iostream>
using namespace std;

class bank_deposit
{
private:
    int principal;
    int years;
    float interest_rate;
    float return_vlue;

public:
    bank_deposit()
    {
        principal = 0;
        years = 0;
        interest_rate = 0;
        return_vlue = 0;
    }
    bank_deposit(int p, int y, float ir);
    bank_deposit(int p, int y, int ir);
    void show();
};

bank_deposit ::bank_deposit(int p, int y, float ir)
{
    principal = p;
    years = y;
    interest_rate = ir;
    return_vlue = principal;
    for (int i = 0; i < y; i++)
    {
        return_vlue = return_vlue * (1 + interest_rate);
    }
}

bank_deposit ::bank_deposit(int p, int y, int ir)
{
    principal = p;
    years = y;
    interest_rate = float(ir) / 100;
    return_vlue = principal;
    for (int i = 0; i < y; i++)
    {
        return_vlue = return_vlue * (1 + interest_rate);
    }
}

void bank_deposit ::show()
{
    cout << "Your principal rate was " << principal << endl
         << "Return value after " << years << " years is " << return_vlue << endl;
}

int main()
{
    bank_deposit bd1, bd2, bd3;
    int p, y, R;
    float r;
    bd3.show();
    cout << "Enter the value of p , y & r: ";
    cin >> p >> y >> r;
    bd1 = bank_deposit(p, y, r);
    bd1.show();
    cout << "Enter the value of p , y & R: ";
    cin >> p >> y >> R;
    bd2 = bank_deposit(p, y, R);
    bd2.show();
}