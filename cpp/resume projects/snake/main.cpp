#include <iostream>
#include <graphics.h>
#include <ctime>
#include <cstdlib>
#include <conio.h> // For _kbhit() and _getch()

using namespace std;

// Constants for the game window size
const int WINDOW_WIDTH = 640;
const int WINDOW_HEIGHT = 480;

// Constants for the snake movement
const int SNAKE_STEP = 10;

// Function to initialize the graphics mode
void initializeGraphics() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char *)"");
}

// Function to display the score
void displayScore(int score) {
    char scoreStr[20];
    sprintf(scoreStr, "Score: %d", score);
    settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);
    outtextxy(10, 10, scoreStr);
}

int main() {
    initializeGraphics();

    // Initialization of variables
    int delayTime = 200;
    int score = 0;
    int length = 1;
    int previousDirection = 1;
    bool game = true;

    int snakeX[200] = {200}, snakeY[200] = {200}; // Initialize snake position
    int foodX = 100, foodY = 100;
    int currentDirection = 1; // Initial direction is right

    srand(time(0)); // Seed for random number generation

    // Game loop
    while (game) {
        // Draw the game panel
        setfillstyle(SOLID_FILL, YELLOW);
        bar(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
        setfillstyle(SOLID_FILL, BLUE);
        bar(0, 0, WINDOW_WIDTH, 10);
        bar(0, 0, 10, WINDOW_HEIGHT);
        bar(0, WINDOW_HEIGHT - 10, WINDOW_WIDTH, WINDOW_HEIGHT);
        bar(WINDOW_WIDTH - 10, 10, WINDOW_WIDTH, WINDOW_HEIGHT - 10);

        // Draw food
        setfillstyle(SOLID_FILL, RED);
        bar(foodX, foodY, foodX + 10, foodY + 10);

        // Check for collision with food
        if (snakeX[0] == foodX && snakeY[0] == foodY) {
            length++;
            score++;
            delayTime = max(50, delayTime - 10); // Increase speed with a minimum delay

            // Generate new food position
            do {
                foodX = (rand() % 60 + 1) * SNAKE_STEP;
                foodY = (rand() % 45 + 1) * SNAKE_STEP;
            } while (getpixel(foodX, foodY) != 0);
        }

        // Handle keyboard input for direction change
        if (_kbhit()) {
            int ch = _getch();
            switch (ch) {
                case 77: // Right arrow key
                    if (previousDirection != 2) currentDirection = 1;
                    break;
                case 75: // Left arrow key
                    if (previousDirection != 1) currentDirection = 2;
                    break;
                case 72: // Up arrow key
                    if (previousDirection != 4) currentDirection = 3;
                    break;
                case 80: // Down arrow key
                    if (previousDirection != 3) currentDirection = 4;
                    break;
                case 32: // Spacebar for pause
                    while (true) {
                        if (_kbhit() && _getch() == 32) // Wait for another spacebar press
                            break;
                    }
                    break;
            }
        }

        // Move the snake in the current direction
        switch (currentDirection) {
            case 1: // Right
                snakeX[0] += SNAKE_STEP;
                previousDirection = 1;
                break;
            case 2: // Left
                snakeX[0] -= SNAKE_STEP;
                previousDirection = 2;
                break;
            case 3: // Up
                snakeY[0] -= SNAKE_STEP;
                previousDirection = 3;
                break;
            case 4: // Down
                snakeY[0] += SNAKE_STEP;
                previousDirection = 4;
                break;
        }

        // Display the snake
        setfillstyle(SOLID_FILL, BLACK);
        for (int i = 0; i < length; i++) {
            bar(snakeX[i], snakeY[i], snakeX[i] + 10, snakeY[i] + 10);
        }

        // Move the snake body
        for (int i = length - 1; i > 0; i--) {
            snakeX[i] = snakeX[i - 1];
            snakeY[i] = snakeY[i - 1];
        }

        // Collision detection with itself
        for (int i = 1; i < length; i++) {
            if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i]) {
                game = false;
                break;
            }
        }

        // Collision detection with walls
        if (snakeX[0] >= WINDOW_WIDTH - 10 || snakeX[0] < 10 || snakeY[0] < 10 || snakeY[0] >= WINDOW_HEIGHT - 10) {
            cout << "\t\nSNAKE BUMPED INTO THE WALL !!!" << endl;
            game = false;
        }

        // Display the score
        displayScore(score);

        // Control the game speed
        delay(delayTime);
    }

    cout << "\t\nYour Score is " << score << endl;
    cout << "\t\tG A M E  O V E R  !!!\a" << endl;

    closegraph();
    return 0;
}
