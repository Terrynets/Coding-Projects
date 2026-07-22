#include <iostream>
#include <vector>
using namespace std;

int main() {

    int width;
    int height;
    cin >> width >> height;

    vector<vector<int>> grid(height, vector<int>(width, 0));

    int apple_x;
    int apple_y;
    cin >> apple_x ;
    cin >> apple_y;

    grid[apple_y][apple_x] = 5;

   
    for (int i = 0; i < 3; i++) {
        int x;
        int y;
        cin >> x;
        cin >> y;

        grid[y][x] = 1;
    }


    for (int r = 0; r < height; r++) {

        for (int c = 0; c < width; c++) {

            cout << grid[r][c];

            if (c != width - 1)
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}