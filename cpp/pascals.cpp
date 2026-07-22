#include <iostream>
using namespace std;

int pascal(int row, int col) {
    if (col == 0 || col == row) return 1;
    return pascal(row - 1, col - 1) + pascal(row - 1, col);
}

int main() {
    int row, col;
    cin >> row >> col;
    cout << pascal(row, col) << endl;
    return 0;
}
