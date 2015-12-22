#include <iostream>
#include <chrono> //Used for time
#include <thread> //Also used for time
#include <stdlib.h> //For random score
using namespace std; //Saves time
int main(){
int scorea, scoreb;
scorea = rand() % 20 + 1;
scoreb = rand() % 20 + 1;
cout << "BOMB COUNTDOWN" << endl;
this_thread::sleep_for(chrono::second(2)); //Gives time for Bomb Countdown text
for (int bombtimer=10; /*Creates bomb timer variable*/bombtimer>-1; /*Checks if bomb timer is bigger than -1*/--bombtimer/*subtracts one from bomb timer*/) {
cout << bombtimer << endl;
this_thread::sleep_for(chrono::seconds(1)); //Wait 1 second
}
cout << "BOOM" << endl;
this_thread::sleep_for(chrono::seconds(1)); //Wait 1 second
cout << "Player had been killed. Score: " << scorea << "-" << scoreb << endl;
return 0; //Exits application
}
