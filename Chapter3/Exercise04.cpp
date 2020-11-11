// Exercise 4 and 5 from page 85
// Author: Bryan Culver
// Date created: 11 Nov 2020
// Version 1.0 11 Nov 2020

#include "../std_lib_facilities.h"

int main(){
    int val1 = -1;
    int val2 = -1;
    int minVal = -1;
    int maxVal = -1;
    double dubval1 = -1;
    double dubval2 = -1;
    double dubMinVal = -1;
    double dubMaxVal = -1;

    cout << "Provide two different integers for comparison:\n";
    cin >> val1 >> val2;
    
    // Smallest, largest, sum, difference, product, and ratio of ints
    if (val1<val2) {minVal=val1; maxVal=val2;}
    else if (val2<val1) {minVal=val2; maxVal=val1;}
    cout << "The smallest value is "<<minVal<<".\n"
         << "The largest value is "<<maxVal<<".\n"
         << "The sum of the values is "<<val1+val2<<".\n"
         << "The difference of each value is "<<maxVal-minVal<<".\n"
         << "The product of the values is "<<val1*val2<<".\n"
         << "The values divided results in "<<maxVal/minVal<<".\n";

    cout << "Now please provide two floating point numbers:\n";
    cin >> dubval1 >> dubval2;
    // Same thing except with the double values. 
    if (dubval1<dubval2) {dubMinVal=dubval1; dubMaxVal=dubval2;}
    else if (dubval2<dubval1) {dubMaxVal=dubval2; dubMaxVal=dubval1;}
    cout << "The smallest value is "<<dubMinVal<<".\n"
         << "The largest value is "<<dubMaxVal<<".\n"
         << "The sum of the values is "<<dubval1+dubval2<<".\n"
         << "The difference of each value is "<<dubMaxVal-dubMinVal<<".\n"
         << "The product of the values is "<<dubval1*dubval2<<".\n"
         << "The values divided results in "<<dubMaxVal/dubMinVal<<".\n";
    return 0;
}