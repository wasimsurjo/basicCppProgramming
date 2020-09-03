#include <iostream>
#include <cstdlib> // Standard Library = Used to bring some tools from library
#include <ctime>  // Accessing Computer Time
using namespace std;

void oitee(int x){
    cout << "Printing Int = " << x << endl;}

void oitee(float x){
    cout << "Printing Float = " << x << endl;}
//Multiple Voids Created For The Same Function For Different Value Types.
int main(){
int a= 54;
float b = 32.4896;

oitee(a); // C++ will check both voids & send value to the box of the right type.
oitee(b);
}
