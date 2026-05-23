#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, int> flavours;
    string flavour;

    while (cin >> flavour && flavour != "end") {
        flavours[flavour]++;
    }

    for (auto entry : flavours) {
        cout << entry.first << ": " << entry.second << endl;
    }
    return 0;
}
