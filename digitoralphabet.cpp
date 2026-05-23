#include <iostream>
using namespace std;

int main(){
 char Guess;
 cout << " user please choose any digit or char or special char " << endl;
 cin >> Guess ;

 if ( Guess >= 'A' && Guess <= 'Z' || Guess >= 'a' && Guess <= 'z'){

    cout << Guess << " is an alphabet"<< endl;
 }

 else if ( Guess >= '0' && Guess <= '9'){
    cout << Guess << " is a digit" << endl;
 }

 else {
    cout << Guess << " is a special character"<< endl;
 }


    return 0;
}