#include <iostream>
#include<cmath> // Used to bring power method(pow)
using namespace std;


 int main(){
 double I, R, L, C, f, E, s;
 cin >> E;
 cin >> R;
 cin >> L;
 cin >> C;
 cin >> f;

 s=sqrt((R*R)+ pow((2*M_PI*f*L)-(1/2*M_PI*f*C), 2));

 I=E/s;

 cout << I << endl;
 }
