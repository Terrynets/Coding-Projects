#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

//boolean function to check if the grid we are trying to move into is valid
bool is_valid_cell(vector<vector<int>>grid,int cell_x,int cell_y,int width,int height){
    //checking that the next cell_x is not out of bounds...
    if(cell_x>width-1 || cell_x<0){
        return false;
    }
    //checking that the next cell_y is not out of bounds...
    if(cell_y>height-1 || cell_y<0){
        return false;
    }
    //checking whether the next grid cell is not yet occupied (apple cell is valid to move into)...    
    if(grid[cell_y][cell_x]!=0 && grid[cell_y][cell_x]!=5){
        return false;
    }
    return true;
}
//Calculate the str8 line distance between the new snake head coordinates and the apple
double get_distance(int x_1,int y_1,int x_2,int y_2){
    double distance = sqrt(pow((x_1-x_2),2)+pow((y_1-y_2),2));
    return distance;
}

int main() {

    int width, height;
    cin >> width >> height;

    vector<vector<int>> grid(height, vector<int>(width, 0));
    vector<int> snake1_info;
    // apple coordinates
    int apple_x, apple_y, n;
    cin >> apple_x >> apple_y;

    grid[apple_y][apple_x] = 5;
    cin >> n;
    // snake coordinates
    for(int j=0;j<n;j++){
        int x, y;
        for (int i = 0; i < 3; i++) {
            cin >> x >> y;
            grid[y][x] = j+1;
            //Storing Snake1's coordinates from the inputs for later use...
            if(j==0){
                snake1_info.push_back(x);
                snake1_info.push_back(y);
            }
        }
    }
    //getting the snake1's head coordinates
    int snake1_headX = snake1_info[0];
    int snake1_headY = snake1_info[1];

    // Store candidate moves as (direction_name, distance) pairs
    vector<pair<string,double>> candidates;

    // Check all 4 neighbouring cells and record valid ones with their distance
    // LEFT
    if(is_valid_cell(grid, snake1_headX-1, snake1_headY, width, height)){
        double dist = get_distance(apple_x, apple_y, snake1_headX-1, snake1_headY);
        candidates.push_back({"LEFT", dist});
    }
    // RIGHT
    if(is_valid_cell(grid, snake1_headX+1, snake1_headY, width, height)){
        double dist = get_distance(apple_x, apple_y, snake1_headX+1, snake1_headY);
        candidates.push_back({"RIGHT", dist});
    }
    // UP
    if(is_valid_cell(grid, snake1_headX, snake1_headY-1, width, height)){
        double dist = get_distance(apple_x, apple_y, snake1_headX, snake1_headY-1);
        candidates.push_back({"UP", dist});
    }
    // DOWN
    if(is_valid_cell(grid, snake1_headX, snake1_headY+1, width, height)){
        double dist = get_distance(apple_x, apple_y, snake1_headX, snake1_headY+1);
        candidates.push_back({"DOWN", dist});
    }

    // Find the minimum distance among all valid candidates
    double min = candidates[0].second;
    for(int i=1; i<(int)candidates.size(); i++){
        if(candidates[i].second < min){
            min = candidates[i].second;
        }
    }

    // Collect all directions tied at minimum distance
    vector<string> best_moves;
    for(int i=0; i<(int)candidates.size(); i++){
        if(candidates[i].second == min){
            best_moves.push_back(candidates[i].first);
        }
    }

    // Sort alphabetically and print (one per line)
    sort(best_moves.begin(), best_moves.end());
    for(int i=0; i<(int)best_moves.size(); i++){
        cout << best_moves[i] << endl;
    }

    return 0;
}