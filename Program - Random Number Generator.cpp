#include <iostream>
#include <cstdlib> // Standard Library = Used to bring some tools from library
#include <ctime>  // Accessing Computer Time
using namespace std;


 int main()
 {    /* srand modifies rand() below & also used computer time for 100% random generation */

  for (double x=1; x<25; x++){
    cout << 1 +(rand()%6) << endl; /* rand() = Random Number + %6 to get reminder from 1-6 ; use 1+ to avoid 0's */
  }


  }

