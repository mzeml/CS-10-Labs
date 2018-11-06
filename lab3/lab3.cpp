//Mark Zemlany 2016
//Text Abbrevation decoder. Darn kids communicating with cryptic languages. 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string userAbr = "";
    string abrLol = "LOL";
    string abrIdk = "IDK";
    string abrBff = "BFF";
    string abrImho = "IMHO";
    string abrTmi = "TMI";
    
      cout << "Input an abbreviation: ";
    cin >> userAbr;
    cout << endl;
    
    if (abrLol == userAbr) {
        cout << "laughing out loud" << endl;
        }
   else if (abrIdk == userAbr) {
        cout << "I don't know" << endl;
    }
   else if (abrBff == userAbr) {
        cout << "best friends forever" << endl;
    }
    else if (abrImho == userAbr) {
        cout << "in my humble opinion" << endl;
    }
   else if (abrTmi == userAbr) {
        cout << "too much information" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }
 
    return 0;
}