#include <iostream>
using namespace std;

int main() {
   int userNum = 0;
   int userNum2 = 0;

   cout << "Enter integer: ";
   cin  >> userNum;
   cout << endl;
   cout << "You entered: " << userNum;
   cout << endl;
   cout << userNum << " squared is " << userNum * userNum;
   cout << endl;
   cout << "And ";
   cout << userNum;
   cout << " cubed is ";
   cout << userNum * userNum * userNum;
   cout << "!!";
   cout << endl;
   cout << "Enter another integer: ";
   cout << endl;
   cin >> userNum2;
   cout << userNum << " + " << userNum2 << " is " << userNum + userNum2;
   cout << endl;
   cout << userNum << " * " << userNum2 << " is " << userNum * userNum2;
   cout << endl;
   
   
   // FIXME finish

   return 0;
}