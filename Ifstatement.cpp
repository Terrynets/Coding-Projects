// if statements works when there is a condition met
// syntac involve : if(bool/condition){ what you want the program to do}
// grading system

#include <iostream>
using namespace std;
int main(){

int grade;
cin>>grade;
cout << "The grade amount entered is : "<< grade << endl;

if (grade>75){
    cout << " You Got A Disntinction"<< grade<< endl;
}

else if (grade>50 && grade <75){
    cout << " You did well"<< grade << endl;
}

else if (grade>=25 && grade<=50){
    cout << "You can do better"<< grade << endl;
}

else {
    cout << "Failed" << grade << endl;
}

    return 0;
}