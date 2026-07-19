#include <iostream>
#include <vector>

using namespace std;

int main() {
    int width, height;
    cin >> width >> height;


    vector<vector<int>> matric(height, vector<int>(width, 0));


    int app_X;
    int app_Y;
    cin >> app_X ;
    cin >> app_Y;
    matric[app_Y][app_X] = 5;

    int numSnakes;
    cin >> numSnakes;

    // Read each snake one by one
    for (int i = 1; i <= numSnakes; i++) {
        for (int part = 0; part < 3; part++) {
            int x, y;
            cin >> x >> y;
            matric[y][x] = i;
    }

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << matric[i][j];
        }
        cout << endl;
    }

    return 0;
}
}