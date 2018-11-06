#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector<double> &vctrVals) //(3) FIXME - Add Parameter DONE
{
    double userDouble = 0.0;

    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) 
    {
    vctrVals.push_back(userDouble);//(3) FIXME - Add numbers to vector DONE
    }
    cout << endl;

    return;
}

double meanVector(const vector <double> &v) {

   //(4) FIXME - Calculate mean of vector numbers DONE
   double tempMean = 0.0;
   //double divBy = 0.0;
   double i = 0.0;
   
    for (i = 0.0; i < v.size(); ++i)
   {
    tempMean = v.at(i) + tempMean; 
    //divBy = i;
   }
   tempMean = tempMean / i; 
   return tempMean;
}

double varianceVector(double vectorAvg, const vector <double> &v) {

   //(5) FIXME - Calculate variance of vector numbers DONE
   int i = 0;
   double tempVari = 0.0;
   double tempVariTotal = 0.0;
   int vectorSize = 0;
   
   vectorSize = v.size();
   
   for (i = 0; i < vectorSize; ++i)
   {
   tempVari = pow(v.at(i) - vectorAvg, 2);
   tempVariTotal = tempVariTotal + tempVari;
   }
   tempVariTotal = tempVariTotal / v.size();
   
   
   return tempVariTotal;
}

double standardDeviationForVariance(double vectorVariance) {

   //(6) FIXME - Calculate standard deviation
   return sqrt(vectorVariance);
}

int main() {
   //(3) FIXME - Declare vector of doubles DONE
   vector<double> myVar(0.0);
   double avg = 0.0;
   double var = 0.0;
   double stdDev = 0.0;
   unsigned int i = 0;
  // double myVar = 0;
    //double tempVal = 0.0;
    

   //(3) FIXME - Call fillVector() function DONE
   fillVector(myVar);
   
   cout << "You entered: ";
   //(3) FIXME - Print vector values (use i variable) DONE
   for (i = 0; i < myVar.size(); ++i)
   {
       cout << myVar.at(i) << " ";
   }
    cout << endl;
   //(4) FIXME - Call meanVector() function DONE
    avg = meanVector(myVar);
   //(5) FIXME - Call varianceVector() function DONE
   //variance is val minus mean and then sqaured, added to rest of vals 
   
   var = varianceVector(avg, myVar);

   //(6) FIXME - Call standardDeviationForVariance() function
   
   stdDev = standardDeviationForVariance(var);

   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0;
}