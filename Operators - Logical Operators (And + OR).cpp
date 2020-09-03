#include <iostream>
#include<cmath> // Used to bring power method(pow)
using namespace std;


 int main(){

 int age, y;

 cout << "Enter Age! - ";
 cin >> age;
 cout << "Enter Cash Amount! - ";
 cin >> y;
 cout << endl;

 if (age>18 && y>500){

    cout << "You're Allowed To Go In!\n";
 }
 if (age<60 || y<5000){

    cout << "You're Allowed Exceptionally!\n";
 }
  }

