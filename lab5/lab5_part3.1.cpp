#include <iostream>
using namespace std;

int main() {
int i = 0;
int j= 0;
int m = 0;
char userChar = ' ';
int userRow = 0;

 
 cout << "Enter a character: ";
 cin >> userChar;

 
 cout << "Enter number of rows: ";
 cin >> userRow;
 cout << endl;





     
   for (j = 0; userRow > j; ++j)
   {
    for (m = 1; m < userRow; ++m)
    cout << "  ";
    for (i = userRow; i > 1; --i)
    //amtofspaces = userRow - 1;
    {
        cout << userChar << " ";
    }
    cout << endl;
   }
    
    
    //charamt = amtspaces - 1
    
  
    //amtofchars = 

   return 0;
}