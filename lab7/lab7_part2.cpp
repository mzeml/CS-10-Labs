#include <iostream>
#include <cstdlib>


using namespace std;

double percentHeads(double userToss)
    {
         srand(4444);
        int toss = 0;
        double headsTotal = 0.0;
        double tailsTotal = 0.0;

        
        
        //heads divided by userToss times 100
       
       for (int i = 1; i <= userToss; ++i)
       {
        toss = (rand() % 2) + 1;
            if (toss == 1)
            {
                ++headsTotal;
            }
            else
            {
                ++tailsTotal;
            }
       }
        
        return (((headsTotal/userToss)) * 100);
    }



int main()
{
    double userToss = 0.0;

    
    
    
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> userToss;
    cout << endl;
    
    
    
    cout << "Heads came up " << static_cast<double>(percentHeads(userToss)) << "% of the time." << endl;
    
    
    return 0;
}