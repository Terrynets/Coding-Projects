#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

    vector<int> numbers = {5 , 1 , 2 , 7 , 4 , 7 , 0 , 3 ,9};
    sort(numbers.begin(), numbers.end());
   
 for ( int x : numbers)  {
    cout << x << " "<< endl;}

    return 0;


}