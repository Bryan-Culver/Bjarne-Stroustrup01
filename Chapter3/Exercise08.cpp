// Exercise 8 from page 86
// Author: Bryan Culver
// Date created: 11 Nov 2020
// Version 1.0: 11 Nov 2020

#include "../std_lib_facilities.h"

int main(){
    int number = 0;
    cout << "Please enter an integer:\n";
    cin >> number;
    if (number%2==0){
        cout << "The number you've entered is even.\n";
    }else {
        cout << "The number you've entered is odd.\n";
    }
    return 0;
}