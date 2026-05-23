#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Check if the cell is valid (inside bounds and not occupied, except apple)
bool is_valid_cell(vector<vector<int>> &grid, int cell_x, int cell_y, int width, int height, int apple_x, int apple_y) {
    if (cell_x < 0 || cell_x >= width) return false;
    if (cell_y < 0 || cell_y >= height) return false;
    // Allow apple cell even though it's marked
    if (grid[cell_y][cell_x] != 0 && !(cell_x == apple_x && cell_y == apple_y)) return false;
    return true;
}

// Straight-line distance between two points
double get_distance(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}

int main() {
    int width, height;
    cin >> width >> height;

    vector<vector<int>> grid(height, vector<int>(width, 0));
    int apple_x, apple_y, n;
    cin >> apple_x >> apple_y;
    grid[apple_y][apple_x] = 5;

    cin >> n;
    vector<int> snake1_info;

    // Read snakes
    for (int j = 0; j < n; j++) {
        int x, y;
        for (int i = 0; i < 3; i++) {
            cin >> x >> y;
            grid[y][x] = j + 1;
            if (j == 0 && i == 0) { 
                // store snake1 head explicitly (first input for snake1)
                snake1_info.push_back(x);
                snake1_info.push_back(y);
            }
        }
    }

    int snake1_headX = snake1_info[0];
    int snake1_headY = snake1_info[1];

    // Candidate moves: LEFT, RIGHT, UP, DOWN
    vector<pair<int,int>> moves = {
        {snake1_headX - 1, snake1_headY}, // LEFT
        {snake1_headX + 1, snake1_headY}, // RIGHT
        {snake1_headX, snake1_headY - 1}, // UP
        {snake1_headX, snake1_headY + 1}  // DOWN
    };
    vector<string> directions = {"LEFT", "RIGHT", "UP", "DOWN"};

    double min_dist = width * height; 
    string best_dir = "RIGHT";

    for (int i = 0; i < 4; i++) {
        int cell_x = moves[i].first;
        int cell_y = moves[i].second;
        if (is_valid_cell(grid, cell_x, cell_y, width, height, apple_x, apple_y)) {
            double dist = get_distance(cell_x, cell_y, apple_x, apple_y);
            if (dist < min_dist) {
                min_dist = dist;
                best_dir = directions[i];
            }
        }
    }

    cout << best_dir << endl;
    return 0;
}
