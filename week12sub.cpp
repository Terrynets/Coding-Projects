#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct student {
    string name;
    int marks;
};

bool compare(student a, student b) {
    return a.name < b.name;
}

int main() {

    int N;
    cin >> N;

    vector<student> students(N);

    for (int i = 0; i < N; i++) {
        cin >> students[i].name >> students[i].marks;
    }

    sort(students.begin(), students.end(), compare);

    for (int i = 0; i < N; i++) {
        cout << students[i].name << ": "
             << students[i].marks << endl;
    }

    return 0;
}