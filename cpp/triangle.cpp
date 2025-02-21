#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw a triangle
    line(140, 140, 350, 100); // Line from (140,140) to (350,100)
    line(140, 140, 200, 200); // Line from (140,140) to (200,200)
    line(350, 140, 200, 200); // Line from (350,140) to (200,200)

    getch(); // Wait for user input
    closegraph(); // Close the graphics window

    return 0;
}
