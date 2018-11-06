#include <iostream>
#include <string>
using namespace std;

int main() {
   string userWord = "";
  int i = 0;
   
 
   cout << "Enter word: ";
   cin >> userWord;
   //cout << endl;


 

   cout << "You entered: " << userWord << endl;
   
   
   /*how this works is it stards at 0 aka the first letter of userWord.
   It then checks via the if/else if branch to see if the first letter of the word matches
   any of the values. When it matches, it will assign the new char to the one that activated it. 
   After that, 1 is added to i which means it moves to the next letter. 
   It continues this loop until i is greater than the userWord's length */
   
   for (i = 0; userWord.length() > i; ++i) {
       
       if (userWord.at(i) == 'a') 
           userWord.at(i) = '@';
      // note the lack of curly braces ({}) within the loop. You dont need them for the if/else wiithin the loop in this case
       else if (userWord.at(i) == 'e')
           userWord.at(i) = '3';
       
       else if (userWord.at(i) == 'i') 
           userWord.at(i) = '!';
      
       else if (userWord.at(i) == 'g')
                userWord.at(i) = '9';
      
       else if (userWord.at(i) == 's')
            userWord.at(i) = '$';
      
       else if (userWord.at(i) == 'x')
            userWord.at(i) = '*';
  
        
   }
  
        cout << "New word: " << userWord << endl;
   
   return 0;
}