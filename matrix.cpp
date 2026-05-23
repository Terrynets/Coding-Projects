#include <iostream>
#include <vector>
using namespace std;

int main() {
    int row_snake, col_apple;
    cin >> rows >> cols;

    vector<vector<int>> matrix(row_snake, vector<int>(col_apple , 0));

    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int r, c, val;
        cin >> r >> c >> val;
        matrix[r][c] = val;
    }

    for (int r = 0; r < row_snake ; r++) {
        for (int c = 0; c < col_apple ; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}
