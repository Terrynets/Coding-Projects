#include <iostream>
#include <vector>
using namespace std;

int main() {

    int width, height;
    cin >> width >> height;

    vector<vector<int>> grid(height, vector<int>(width, 0));

    // apple coordinates
    int apple_x, apple_y, n;
    cin >> apple_x >> apple_y;
    grid[apple_y][apple_x] = 5;

    cin >> n;

    // snake coordinates using kink-based coordinate chain format
    for(int j=0; j<n; j++){
        int k;
        cin >> k;

        // Read k (x,y) waypoints for this snake
        vector<int> wx(k), wy(k);
        for(int i=0; i<k; i++){
            cin >> wx[i] >> wy[i];
        }

        // Fill in the grid by drawing segments between consecutive waypoints
        for(int i=0; i<k-1; i++){
            int x1 = wx[i],  y1 = wy[i];
            int x2 = wx[i+1], y2 = wy[i+1];

            // Determine step direction for x and y
            int step_x = 0, step_y = 0;
            if(x2 > x1) step_x = 1;
            else if(x2 < x1) step_x = -1;
            if(y2 > y1) step_y = 1;
            else if(y2 < y1) step_y = -1;

            // Walk from (x1,y1) to (x2,y2) and mark each cell
            int cx = x1, cy = y1;
            while(cx != x2 || cy != y2){
                grid[cy][cx] = j+1;
                cx += step_x;
                cy += step_y;
            }
            // Mark the endpoint of this segment (will be overwritten if it's
            // also the start of the next segment, which is fine — same snake)
            grid[y2][x2] = j+1;
        }
    }

    // Print grid
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