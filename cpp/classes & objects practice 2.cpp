#include <iostream>
#include <cmath>

#include <graphics.h>

// Function to draw a line with given angle and length
void drawBranch(int x, int y, double angle, int length) {
    if (length == 0) return;

    int x2 = x + length * cos(angle * M_PI / 180.0);
    int y2 = y - length * sin(angle * M_PI / 180.0);

    line(x, y, x2, y2);
    drawBranch(x2, y2, angle - 20, length - 10); // Left branch
    drawBranch(x2, y2, angle + 20, length - 10); // Right branch
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Starting coordinates for the tree trunk
    int x = getmaxx() / 2;
    int y = getmaxy();

    // Initial angle and length of the trunk
    double angle = -90; // Upward
    int length = 100;

    // Draw the fractal tree
    drawBranch(x, y, angle, length);

    getch();
    closegraph();
    return 0;
}

