#include <iostream>
#include <cstdlib> // Standard Library = Used to bring some tools from library
#include <ctime>  // Accessing Computer Time
using namespace std;

int volume(int l=1, int w=1, int h=1); /*Default Values */
 int main(){

cout << volume (5) << endl;; //ONly replaces first int l
cout << volume (5,6)<<endl; //ONly replaces first int l & int w
cout << volume (5,6,7); //Replaces all int
  }

int volume(int l, int w, int h){

  return l*w*h;}
