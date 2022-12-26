#include <iostream>
using namespace std;
main(){

int initial;
int time;
int accelration;
int final;

cout <<" Enter initial velocity: ";
cin >>initial;
cout <<" Enter time: ";
cin >>time;
cout <<" Enter accelration: ";
cin >>accelration;

final=(accelration*time)+initial;
cout <<" final velocity: " <<final;

}  