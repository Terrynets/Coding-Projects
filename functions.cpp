#include <iostream>
using namespace std;
int sum( int a, int b){
    return a + b;
}

int square( int x){
    return x*x;

}
int main(){

    int total = sum(2,3);
    cout << total << endl;
   
    int value = square(9);
    cout << value << endl;
    return 0;
}