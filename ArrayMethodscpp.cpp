#include <iostream>
using namespace std;
void print (int wallen[], int sizew);

 int main(){
   int wasim[3] = {8,4,2};
   int oishee[6]= {87,74,65,25,78,45};

       print(wasim, 3);
       print(oishee, 6);
       }


void print (int wallen[], int sizew){
         cout << "# --- Value\n";
         for (int x=0;x<sizew; x++){
            cout << x << "  -->  " << wallen[x] << endl;
         }

}
