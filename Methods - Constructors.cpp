#include <iostream>
#include <string>
 using namespace std;

 class WasA{
 public:
     WasA(string z){   /*Constructors with Same Class Name/Used For Easy Communication Between Object & Function & Setting Auto Functions*/
      findName(z);
     }
     void findName (string y){   //This value was sent to constructor
     x=y;}

     string getName(){
     return x;}

 private:
 string x;
 };

 int main(){

 WasA wo("Private & Public!\n"); /*By using class name, the constructor was used. */

 cout<< wo.getName()<<endl;

 WasA wo2("Create Again!");

 cout<< wo2.getName()<<endl;


 return 0;
 }
