#include <iostream>
using namespace std;
main(){

float pounds;
float cost;
float area;
float perpound;
float persquare;
cout <<" Enter bag size in pounds: ";
cin >>pounds;
cout <<" Enter cost of the bag: ";
cin >>cost;
cout <<" Enter area covered by each bag in square feet: ";
cin >>area;
perpound=cost/pounds;
cout <<" Cost of the fertilizer per pound: "   <<perpound  <<endl;
persquare=cost/area;
cout <<" Cost of fertilizing area per square feet: "  <<persquare;


}
