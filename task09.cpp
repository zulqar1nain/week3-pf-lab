#include <iostream>
using namespace std;
main(){
int num;
int A;
int B;
int C;
int D;
int sum;
cout << "number: ";
cin >>num;
A=num % 10;
cout <<"num1: "  <<A  <<endl;
num =num / 10;
B = num % 10;
cout << "num2: "  <<B  <<endl;
num =num / 10;
C=num % 10;
cout << "num3: "  <<C  <<endl;
num =num / 10;
D=num % 10;
cout << "num4: "  <<D  <<endl;
sum=A+B+C+D;
cout << "Sum: " << sum << endl;
}

