#include <iostream>
using namespace std;

int main() {
int i = 0;
int j= 0;
char userChar = ' ';
int userRow = 0;

 
 cout << "Enter a character: ";
 cin >> userChar;

 
 cout << "Enter number of rows: ";
 cin >> userRow;
 cout << endl;
 


    
    for (int i = userRow; i > 0; --i) {
        for (j = 0; j < i; ++j)
        {
        cout << userChar << " ";
        }
        cout << endl;
    }

/* 'j' is equal to 0. As long as 'j' is less than 'i', it'll spit out userChar and a space. After each iteration, 'j' grows by 1 (++j) 
Once 'j' grows larger than 'i', it completes, ends line, and checks the outer loop to see what it needs to do next.
The outer loop has i equal to userRow. As long as 'i' is greater than 0, it runs the inner loop again.
After succesfully running one iteration of the inner loop, 'i' decreases by 1 (--i).
When 'i' is less than 0, outer loop completes
 */

   return 0;
}