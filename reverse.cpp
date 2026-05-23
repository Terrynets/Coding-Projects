#include <iostream>
#include <cstring>
#define MAX_SIZE 100

using namespace std;

int main(){
    int i;
    int j=0;
    int length;

    char text[MAX_SIZE];
    char reverse[MAX_SIZE];
cout << "enter your characters";
    cin.getline( text , MAX_SIZE);

    length = strlen(text);

    for (i = length - 1 ; i>=0 ; i--){
        reverse[j]=text[i];
        j++;
    }

    reverse[j]='.\0';

    cout << reverse;
    return 0;
}