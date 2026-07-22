#include <iostream>
using namespace std;

int main(){
    string pair;
    cin>>pair;

    int count = 0;

    for ( int i=0 ; pair.length()-1; i++){
        if (pair[i]==pair[i+1]){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}