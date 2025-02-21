#include <iostream>
#include <string>
using namespace std;

// Function to calculate 1's complement of a binary number
string onesComplement(string binary) {
    for (char &c : binary) {
        c = (c == '0') ? '1' : '0';
    }
    return binary;
}

// Function to add 1 to a binary number
string addOne(string binary) {
    for (int i = binary.size() - 1; i >= 0; i--) {
        if (binary[i] == '0') {
            binary[i] = '1';
            break;
        } else {
            binary[i] = '0';
        }
    }
    return binary;
}
