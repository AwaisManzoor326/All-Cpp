#include <iostream>
using namespace std;

void binary_to_decimal(void);
void dec_to_binary(void);

int main()
{
    int choice;
    cout<<"WARNING !!! If you give wrong number, you will get wrong conversion answer."<<endl;
    cout << "What is your conversion: " << endl;
    cout << "1. Decimal to Binary" << endl;
    cout << "2. Binary to Decimal" << endl;             cin >> choice;
    switch (choice)
    {
    case 1:
        dec_to_binary();            break;
    case 2:
        binary_to_decimal();        break;
    default:
        cout << "Invalid Choice!!!" << endl;
        main();
    }
    return 0;
}

void dec_to_binary()
{
    int decNum;
    cout << "Enter a decimal number: ";
    cin >> decNum;

    cout << "Binary equivalent of " << decNum << " is ";

    int ans = 0;
    int power = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;   // it gives the remainder of division on decimal Number performemd each time
        decNum /= 2;   // it updates the original decimal value by dividing it with 2

        ans += rem * power; // now remainder and power of 10 are multiplied, added to answer and stored in it
        power *= 10;  //each time power is incremented by multiplying it with 10 ie.
        // 10^0 = 1, 10^1 = 10, 10^2 = 100, 10^3, 1000 etc
        // means each time previous power is multiplied by 10
    }
    cout << ans << endl;
}

void binary_to_decimal()
{
    int binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    cout << "Decimal equivalent of " << binary << " is ";

    int ans = 0;
    int power = 1;
    while (binary > 0)
    {
        int rem = binary % 10; // each time we divide binary with 10, it gives the last number of binary
        ans += rem * power;   // remainder and power are multiplied, added to answer and stored in it

        binary /= 10;   // when we divide binary wuth 10, it gives answer such that last positioned number
        // will be removed as remainder and new one is saved in binary
        power *= 2;  // it is like : 2^0 = 1, 2^1 = 2, 2^2 = 4, means each time power is multiplied by 2
    }
    cout << ans << endl;
}