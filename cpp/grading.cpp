#include <iostream>
using namespace std;

int main(){
    int grade ;
    cin >> grade ;

    if (grade >= 75){
        cout << "First" << endl;
    }
    else if (grade < 75 && grade >= 70){
        cout << "Upper second" << endl;
    }
    else if (grade < 70 && grade >= 60){
        cout << "Lower second" << endl;
    }
    else if (grade < 60 && grade >= 50){
        cout << "Third" << endl;
    }
    else { cout << "Fail" << endl;}
    return 0;
}