#include <iostream>
#include <cstdlib> // Standard Library = Used to bring some tools from library
#include <ctime>  // Accessing Computer Time
using namespace std;

int factFind(int x){    //Factorial (!) Setup
      if (x==1){
        return 1;
      }
      else{
            return x*factFind(x-1);} //Recall Function FactFind but Subtract 1 From Value
}

void oitee(){
    cout << factFind(6) << endl;
    }

int main(){
oitee();
}
