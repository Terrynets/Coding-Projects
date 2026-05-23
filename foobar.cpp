#include <iostream>
using namespace std;

int main(){

int z;
cin >> z;

if ( z % 3==0){
    cout << "It is divisible by 3" << endl;
}
else if ( z % 5==0){
    cout << "It is divisble by 5" << endl;
}
else if ( z % 5==0 && z % 3 ==0){
    cout << "It is divisible by both"<< endl;
}
else {
    cout << "It is not divisible by any"<<endl;
}

    return 0;
}