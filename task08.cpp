#include <iostream>
using namespace std;
main(){

float vegetable_price;
float total_kilogram_veg;
float total_veg_price;
float fruit_price;
float total_kilogram_fruit;
float total_fruit_price;
float total_price;
float total_rupees;




cout << " Vegetable price per kilogram: ";
cin >>vegetable_price;
cout << " total kiolgram of vegetable: ";
cin >>total_kilogram_veg;
total_veg_price=vegetable_price*total_kilogram_veg;
cout << " total vegetable price: " <<total_veg_price  <<endl;
cout << " fruit price per kilogram: ";
cin >>fruit_price;
cout << " total fruit of kilogram: ";
cin >> total_kilogram_fruit;
total_fruit_price=fruit_price*total_kilogram_fruit;
cout << " total fuit price is: "   <<total_fruit_price  <<endl;
total_price=total_veg_price+total_fruit_price;
cout << " total vegetable and fruit price: "  <<total_price  <<endl;
total_rupees=total_price*1.94;
cout << " total earning in rupees: "  <<total_rupees;

} 
