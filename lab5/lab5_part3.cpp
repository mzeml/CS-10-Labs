#include <iostream>
using namespace std;

int main() {
int i = 0;
int j = 0;
int m = 0;
char userChar = ' ';
int userRow = 0;

 
 cout << "Enter a character: ";
 cin >> userChar;

 
 cout << "Enter number of rows: ";
 cin >> userRow;
 cout << endl;

 if (i > j) {
     for (i = userRow; i > 0; --i) {
     cout << " ";
    }
    cout << userChar << endl;
 }
else
for (j = 0; j != i; ++i){
    cout << userChar << " ";
}

   return 0;
}