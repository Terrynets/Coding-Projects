#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number;
    cin >> number;
    vector<double> elements(number);
    double sum = 0;

    for (int i = 0; i < number; i++ ){
        cin >> elements[i];
        sum += elements[i];
    }

    for (int i = 0; i < number ; i++ ){
        cout << elements[i] / sum << endl;
    }
    return 0;
}
