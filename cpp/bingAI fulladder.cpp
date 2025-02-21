#include <iostream>
using namespace std;

// Function to implement the full adder
void Full_Adder(int A, int B, int C_In) {
    int Sum, C_Out;

    // Calculate the sum using XOR
    Sum = C_In ^ (A ^ B);

    // Calculate the carry using AND and OR
    C_Out = (A & B) | (B & C_In) | (A & C_In);

    cout << "Sum = " << Sum << endl;
    cout << "C-Out = " << C_Out << endl;
}

int main() {
    int A, B, C_In;

    cout << "Enter three binary elements (0 or 1): ";
    cin >> A >> B >> C_In;

    // Call the Full_Adder function with the given inputs
    Full_Adder(A, B, C_In);

    return 0;
}
