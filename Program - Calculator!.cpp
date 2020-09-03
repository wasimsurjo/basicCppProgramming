#include <iostream> /* pre-process plugin */

using namespace std;  /*Library*/

int main() /*Variable + Function*/
{
    int a, b;

    cout << "Enter a Number Damn! \n";
    cin >> a;

    cout << "Enter Another Number Damn! \n";
    cin >> b;

    int s= a+b;
    int d= a-b;
    int p=a*b;
    int f=a/b;
    int r=a%b;

    cout << "a+b = " << s << endl << "a-b = " << d << endl << "a*b = " << p << endl << "a/b = " << f << endl << "a%b = " << r << endl;
    return 0;
}
