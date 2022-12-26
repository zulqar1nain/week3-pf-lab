#include <iostream>
using namespace std;
main(){
string movie;
float adultticket;
float childticket;
float adultticketsold;
float childticketsold;
float totalACsold;
float donate;
float totalamount;
cout <<" Enter movie name: ";
cin >>movie;
cout <<" Enter adult ticket price: ";
cin >>adultticket;
cout <<" Enter child ticket price: ";
cin >>childticket;
cout <<" Enter number of adult ticket sold: ";
cin >>adultticketsold;
cout <<" Enter number of child ticket sold: ";
cin >>childticketsold;
totalACsold=adultticket*adultticketsold+childticket*childticketsold;
cout << " Total amount: " <<totalACsold  <<endl;
donate=totalACsold/10;
cout << " Total amount donate: " <<donate <<endl;
totalamount=totalACsold-donate;
cout << " Total amount after donation: "    <<totalamount;

}