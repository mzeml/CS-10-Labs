//Point Distance Calculator
//c Mark Zemlany Jan 10 2016

#include <iostream>
#include <cmath>
using namespace std;


int main()  {
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double numDistance = 0.0;
    
//Goal one: Get info from user about point 1

    cout << "Insert first coordinate here (seperate 'x' and 'y' by a space): ";
    cin >> x1;
    cin >> y1;
    cout << endl;
    
    cout << "Now enter the second coordinate here (seperate 'x' and 'y' by a space): ";
    cin >> x2;
    cin >> y2;
    cout << endl;
    
    //cout << x1 << " is the first x-coordinate and " << y1 << " is the first y-coordinate." << endl;
    //cout << x2 << " is the second x-coordinate and " << y2 << " is the second y-coordinate." << endl;
    
    numDistance = pow((x2 - x1),2.0) + pow((y2-y1),2.0);
    numDistance = sqrt(numDistance);
    
    cout << "The distance between these two points is: " << numDistance << endl;
    
    return 0;
}