#include <iostream>
#define WIDTH 40
#define HEIGHT 10
using namespace std;

int main() {
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            // Create wave effect using sine function
            int value = (int)(10.0 * sin((double)j / 10));
            if (value == i)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
