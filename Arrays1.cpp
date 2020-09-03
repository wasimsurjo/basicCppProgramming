#include <iostream>
using namespace std;


 int main(){

       int wasim[5] = {8,9,7,9,7};
       int sum=0;

       for (int x=0;x<5;x++){
        sum+=wasim[x];
       }

       cout << "Sum = " << sum << endl;

       int oishee[10];

       cout << "Element  -  Value" <<endl;

       int y=10;
       for(int x = 0;x<10;x++){
        oishee[x]=y;
        y+=10;

        cout << x << "   ------   " << oishee[x] << endl;
       }

 }
