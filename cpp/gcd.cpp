#include <iostream>
using namespace std;

int euclid_gcd(int a, int b) {
    int dividend = (a >= b) ? a : b;
    int divisor  = (a <= b) ? a : b;

    while (divisor != 0) {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << euclid_gcd(x, y) << endl;
    return 0;
}
