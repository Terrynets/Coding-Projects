#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;

    vector<vector<int>> matrix(num1, vector<int>(num2, 0));

    int N = 0;

    for (int i = 0; i < N; i++) {
        int r, c, val;
        matrix[r][c] = val;
    }

    for (int r = 0; r < num1; r++) {
        for (int c = 0; c < num2; c++) {
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    return 0;
}
