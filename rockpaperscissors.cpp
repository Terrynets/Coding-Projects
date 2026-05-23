#include <iostream>
using namespace std;

int main(){

string player_1;
string player_2;
cin >> player_1;
cin >> player_2;

if (player_1 =="Rock" && player_2 =="Scissors" || player_1 =="Scissors" && player_2 =="paper" || player_1 =="Paper" && player_2 =="Rock"){
cout << "Player 1 wins" << endl;}

else if (player_2=="Rock" && player_1=="Scissors" || player_2=="Scissors" && player_1=="paper" || player_2=="Paper" && player_1=="Rock"){
cout << "Player 2 wins" << endl;}

else if ( player_1 == player_2 ) {
cout << "Tie" << endl;}

return 0;
}