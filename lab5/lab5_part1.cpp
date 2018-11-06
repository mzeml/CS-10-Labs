#include <iostream>
using namespace std;

int main() {
int i = 0;
int j = 0;
char userChar = ' ';
int userRow = 0;

 
 cout << "Enter a character: ";
 cin >> userChar;
 cout << endl;
 
 cout << "Enter number of rows: ";
 cin >> userRow;
 cout << endl;
 
    for (i = 0; i < userRow; ++i) 
    {
     for  (j = 0; j <= i; ++j) 
     {
      cout << userChar << " ";
     }
     cout << endl;   
    }

// while 'j' is less than or equal to 'i', spit out userChar and a space. Once 'j' is larger than 'i', spit out an endline. 
//Do this process again until you have iterated more than userRow times

   return 0;
}