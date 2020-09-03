#include <iostream>


 using namespace std;


 int main(){

  int age, ageTotal=0, Total=0;
  cout << "Enter An Age or -1 To Quit!\n";
  cin >> age;

  while (age != -1){
    ageTotal += age;
    Total++;

    cout << "Enter Another Age or -1 To Quit!\n";
    cin >> age;
  }
   cout << endl;
   cout << "Total People: " << Total << endl;
   cout << "Average Age: " << ageTotal/Total;

 return 0;
 }
