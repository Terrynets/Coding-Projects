#include <iostream>
using namespace std;

int main(){

    double value;
    int price;

    cin>>value;
    cin>>price;

    double tipprice = value + (value*price/100.0);

    cout << tipprice << endl;




    return 0;
}