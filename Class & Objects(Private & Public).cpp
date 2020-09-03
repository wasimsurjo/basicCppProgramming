#include <iostream>
#include <string>
using namespace std;

class WasimA{

public:
    void setNoun(string x){   /*/Accessors to access private*/
        name = x;
    }
    string getName(){
    return name;}

private:
    string name="Wasim";
};
int main(){

WasimA wObj;
/* wObj.setNoun=("Wasim");*/
cout << wObj.getName();

return 0;
}

