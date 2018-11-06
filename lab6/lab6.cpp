//this is an excercise in patience and inefficency

#include <iostream>
#include <cstdlib>     

using namespace std;

int main() {
   srand(3333); // Do not change the seed value.
   
   int userRoll = 0; //amount we need to roll
   int i = 0;
   int j = 0;
   int dieDigit = 2; // minimum value of both die
   int dieAmtAppears = 0;
   int numDieTotal = 0; //sum of two rolls
   
   const int num2 = 2;
   const int num3 = 3;
   const int num4 = 4;
   const int num5 = 5;
   const int num6 = 6;
   const int num7 = 7;
   const int num8 = 8;
   const int num9 = 9;
   const int num10 = 10;
   const int num11 = 11;
   const int num12 = 12;
   
   int num22 = 0;
   int num33 = 0;
   int num44 = 0;
   int num55 = 0;
   int num66 = 0;
   int num77 = 0;
   int num88 = 0;
   int num99 = 0;
   int num101 = 0;
   int num111 = 0;
   int num122 = 0;
   
   cout << "Enter number of times you want to roll a pair of dice: ";
   cin >> userRoll; 
   cout << endl;
   
   
   for (i = userRoll; i > j; ++j)
         { 
         numDieTotal = ((rand() % 6) + 1) + ((rand() % 6) + 1);
         
         if (numDieTotal == num2)
         {
            ++num22;
         }
         else if (numDieTotal == num3)
         {
            ++num33;
         }
         else if (numDieTotal == num4)
         {
            ++num44;
         }  
         else if (numDieTotal == num5)
         {
            ++num55;
         }
         else if (numDieTotal == num6)
         {
            ++num66;
         }
         else if (numDieTotal == num7)
         {
            ++num77;
         }
         else if (numDieTotal == num8)
         {
            ++num88;
         }
         else if (numDieTotal == num9)
         {
            ++num99;
         }
         else if (numDieTotal == num10)
         {
            ++num101;
         }
         else if (numDieTotal == num11)
         {
            ++num111;
         }
         else if (numDieTotal == num12)
         {
            ++num122;
         }
         }
       
       
       cout << "# of times each score was rolled" << endl;
        cout << "2: " << num22 << endl;
        cout << "3: " << num33 << endl;
        cout << "4: " << num44 << endl;
        cout << "5: " << num55 << endl;
        cout << "6: " << num66 << endl;
        cout << "7: " << num77 << endl;
        cout << "8: " << num88 << endl;
        cout << "9: " << num99 << endl;
        cout << "10: " << num101 << endl;
        cout << "11: " << num111 << endl;
        cout << "12: " << num122 << endl;
    cout << endl;
        
  cout << "Probability of rolling each possible score" << endl;      
       cout << "2: " << (static_cast<double>(num22)/userRoll) * 100 << "%" << endl;
        cout << "3: " << (static_cast<double>(num33)/userRoll) * 100 << "%" << endl;
        cout << "4: " << static_cast<double>(num44)/userRoll * 100 << "%" << endl;
        cout << "5: " << static_cast<double>(num55)/userRoll * 100 << "%" << endl;
        cout << "6: " << static_cast<double>(num66)/userRoll * 100 << "%" << endl;
        cout << "7: " << static_cast<double>(num77)/userRoll * 100 << "%" << endl;
        cout << "8: " << static_cast<double>(num88)/userRoll * 100 << "%" << endl;
        cout << "9: " << static_cast<double>(num99)/userRoll * 100 << "%" << endl;
        cout << "10: " << static_cast<double>(num101)/userRoll * 100 << "%" << endl;
        cout << "11: " << static_cast<double>(num111)/userRoll * 100 << "%" << endl;
        cout << "12: " << static_cast<double>(num122)/userRoll * 100 << "%" << endl;
    
  
   

   return 0;
}