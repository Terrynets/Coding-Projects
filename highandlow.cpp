#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int range;
    cin >> range;
    vector<double> element(range);

    for (int i = 0; i < range; i++) cin >> element[i];

    sort(element.begin(), element.end());

    cout << element[1] << endl;        
    cout << element[range-2] << endl;      
    return 0;
}
