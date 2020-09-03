#include <iostream>
#include<cmath> // Used to bring power method(pow)
using namespace std;


 int main(){

  float x, inv= 10000, prof= .01;

  for (int day=1; day<=30; day++){
    x = inv * pow(1+prof, day);
    cout << "Day " << day << "  ------  " << x << endl;
  }
 }
