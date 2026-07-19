#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void drawSnakeSegment(vector<vector<int>>& grid, int x1, int y1, int x2, int y2, int snakeNum) {
    if (x1 == x2) { 
        int startY = min(y1, y2);
        int endY = max(y1, y2);
        for (int y = startY; y <= endY; ++y) {
            grid[y][x1] = snakeNum;
        }
    } else if (y1 == y2) {
        int startX = min(x1, x2);
        int endX = max(x1, x2);
        for (int x = startX; x <= endX; ++x) {
            grid[y1][x] = snakeNum;
        }
    }
}

int main() {
    int width, height;
    cin >> width >> height;

    int appleX, appleY;
    cin >> appleX >> appleY;

    int totalSnakes;
    cin >> totalSnakes;

    vector<vector<int>> grid(height, vector<int>(width, 0));

    // Place the apple (represented by 5)
    grid[appleY][appleX] = 5;

    for (int snakeNum = 1; snakeNum <= totalSnakes; ++snakeNum) {
        int totalPoints;
        cin >> totalPoints;

        int currentX, currentY;
        cin >> currentX >> currentY;

        for (int p = 1; p < totalPoints; ++p) {
            int nextX, nextY;
            cin >> nextX >> nextY;

            // Connect the current segment joint to the next point
            drawSnakeSegment(grid, currentX, currentY, nextX, nextY, snakeNum);

            currentX = nextX;
            currentY = nextY;
        }
    }

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            cout << grid[i][j];
            if (j < width - 1) {
                cout << " ";
            }
        }
        cout << "\n"; 
    }

    return 0;
}