#include <iostream>
#include <chrono> //Used for time
#include <thread> //Also used for time
using namespace std; //Saves time
int main(){
cout << "BOMB COUNTDOWN" << endl;
for (int bombtimer=10; /*Creates bomb timer variable*/bombtimer>-1; /*Checks if bomb timer is bigger than -1*/--bombtimer/*subtracts one from bomb timer*/) {
cout << bombtimer << endl;
this_thread::sleep_for(chrono::seconds(1)); //Wait 1 second
}
cout << "BOOM" << endl;
return 0; //Exits application
}
