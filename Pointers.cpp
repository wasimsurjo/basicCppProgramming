#include <iostream>
using namespace std;
void print (int wallen[], int sizew);

 int main(){
   int wasim[3][4] = {{15,80,40,22},{10,10,12,15},{20,10,10,10}};

   cout << "# -  Values\n";
     cout << endl;
     for (int row=0;row<3;row++){
            cout << row << "  ";
       for(int column=0;column<4;column++){
   cout << "   "   <<wasim [row][column] << " ";}
         cout<<endl; }



 }
