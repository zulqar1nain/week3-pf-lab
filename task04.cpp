#include <iostream>
using namespace std;
main(){

int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
float marks;
float percentage;
cout << "Enter subject1 marks: ";
cin >>subject1;
cout << "Enter subject2 marks: ";
cin >>subject2;
cout << "Enter subject3 marks: ";
cin >>subject3;
cout << "Enter subject4 marks: ";
cin >>subject4;
cout << "Enter subject5 marks: ";
cin >>subject5;
marks=subject1+subject2+subject3+subject4+subject5;
cout << "total marks: "  <<marks <<endl;
percentage=(marks/500)*100;
cout << "Your percentage: " <<percentage;
}
