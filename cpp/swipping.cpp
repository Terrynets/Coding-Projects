#include <iostream>
using namespace std;

int main(){

int a=10;
int b=15;
int temp;

//before swapping 
cout << " before swapping : " << "a is : " << a << " b is : " << b << endl;

//after swapping 

temp = a;
a = b;
b = temp;

cout << " after swapping : " << "a is : " << a << " b is : "<< b << endl;

return 0;}