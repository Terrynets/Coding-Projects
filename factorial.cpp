#include <iostream>
using namespace std;

int main(){
    int number;
    int i = 1;
    long long fact = 1;

    cout << "enter any number";
    cin>>number ;

    while (i<=number){

        fact = fact * 1;
        i++;
    }

    cout << "factorial of : " <<number << ", is " << fact << endl ;

    

    return 0;
}