// Exercise 9 from page 86
// Author: Bryan Culver
// Date Created: 11 Nov 2020
// Version 1.0 11 Nov 2020

#include "../std_lib_facilities.h"

int main(){
    string number = "??";
    cout << "Spell out a number:\n";
    cin >> number;
    if (number=="zero") cout << 0;
    else if (number=="one") cout << 1;
    else if (number=="two") cout << 2;
    else if (number=="three") cout << 3;
    else if (number=="four") cout << 4;
    else cout << "not a number I know.";
    return 0;
}