// Exercise 11 from page 86
// Author: Bryan Culver
// Date Created: 11 Nov 2020
// Version 1.0 11 Nov 2020

#include "../std_lib_facilities.h"

int main(){
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    double sum = -1;

    cout << "Welcome to the CHANGE COUNTING PROGRAM!!\n"
    <<"--------------------\n"<<
    "Please enter the number of pennies you have:";
    cin >> pennies;
    cout << "\nPlease enter the number of nickels you have:";
    cin >> nickels;
    cout << "\nPlease enter the number of dimes you have:";
    cin >> dimes;
    cout << "\nPlesae enter the number of quarters you have:";
    cin >> quarters;

    sum=pennies + nickels*5 + dimes*10 + quarters*25;

    if (pennies==1){
        cout << "\nYou have "<<pennies<<" penny.";
    }else {
        cout << "\nYou have "<<pennies<<" pennies";
    }
    if (nickels==1){
        cout << "\nYou have "<<nickels<<" nickel.";
    }else {
        cout << "\nYou have "<<nickels<<" nickels.";
    }
    if (dimes==1){
        cout << "\nYou have "<<dimes<<" dime.";
    }else {
        cout << "\nYou have "<<dimes<<" dimes.";
    }
    if (quarters==1){
        cout << "\nYou have "<<quarters<<" quarter.";
    }else {
        cout << "\nYou have "<<quarters<<" quarters.";
    }

    cout << "\nThe value of your change is "<<sum<<" cents, which is $"<<sum/100<<".";
    return 0;
}