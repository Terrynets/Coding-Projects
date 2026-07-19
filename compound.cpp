#include <iostream>
using namespace std;

int main() {
    double P, r;
    int N;
    cin >> P >> r >> N;

    double amount = P;
    for (int year = 1; year <= N; year++) {
        amount = amount * (1 + r);
        cout << "Year " << year << " " << amount << endl;
    }
    return 0;
}
