#include <iostream>
#include <vector>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols, 0));

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int r, c, val;
        cin >> r >> c >> val;
        matrix[r][c] = val;
    }

    for (int r = 0; r < rows; r++) {
        for (int c = 0; c < cols; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}
