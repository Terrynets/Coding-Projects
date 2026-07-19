#include <iostream>
using namespace std;

int main(){

    int x = 20;
     
    while (x >= 0){
        cout << "The value of x is :" << x << endl;
        x-=2;
    }

    cout << " THE LOOP HAS ENDED" << endl;

    int y = 20 ;
    do {
        cout << "The value of y in step 2 is :"<< y << endl;
        y-=2; 
    } while ( y >=0 );

    return 0;

}