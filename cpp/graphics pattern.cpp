#include <graphics.h>
#include <iostream>
#include <sstream>
using namespace std;

void printTree(int x, int y, int* array, int index, int total_elements) {
    if (index >= total_elements)
        return;

    ostringstream str1;
    str1 << array[index];
    string str2 = str1.str();
    char* str = &str2[0u];

    setcolor(GREEN);
    circle(x, y, 15);
    floodfill(x, y, GREEN);
    outtextxy(x - 2, y - 3, str);

    int left = 2 * index + 1;
    int right = 2 * index + 2;

    printTree(x - y / (index + 1), y + 50, array, left, total_elements);
    printTree(x + y / (index + 1), y + 50, array, right, total_elements);

    if (left < total_elements) {
        line(x, y, x - y / (index + 1), y + 50);
    }
    if (right < total_elements) {
        line(x, y, x + y / (index + 1), y + 50);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "None");

    // Given array arr[]
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printTree(300, 100, array, 0, 10);

    getch();
    closegraph();
    return 0;
}

