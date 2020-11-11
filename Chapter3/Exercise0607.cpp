// Exercise 6 and 7 from page 85
// Author: Bryan Culver
// Date created: 11 Nov 2020
// Version: 1.0 11 Nov 2020

#include "../std_lib_facilities.h"

int main(){
    int val1 = -1;
    int val2 = -1;
    int val3 = -1;
    int max = -1;
    int mid = -1;
    int min = -1;
    string first = "??";
    string second = "??";
    string third = "??";
    string temp = "??";

    cout << "Please enter three integers:\n";
    cin >> val1 >> val2 >> val3;
    if (val1<=val2 && val1<=val3) {min=val1;}
    if (val1>=val2 && val1>=val3) {max=val1;}
    if ((val1<=val2 && val1>=val3) || (val1>=val2 && val1<=val3)) {mid=val1;}
    if (val2<=val1 && val2<=val3) {min=val2;}
    if (val2>=val1 && val2>=val3) {max=val2;}
    if ((val2<=val1 && val2>=val3) || (val2>=val1 && val2<val3)) {mid=val2;}
    if (val3<=val1 && val3<=val2) {min=val3;}
    if (val3>=val1 && val3>=val2) {max=val3;}
    if ((val3>=val1 && val3<=val2) || (val3<=val1 && val3>=val2)) {mid=val3;}

    cout << min <<", "<<mid<<", "<<max<<".\n";

    cout << "Please enter three words:\n";
    cin >> first >> second >> third;
    if (second<=first && second<=third) {temp=first; first=second; second=temp;}
    else if (third<=first && third<=second) {temp=first; first=third; third=temp;}
    if (third<=second) {temp=second; second=third; third=temp;}
    cout << first<<", "<<second<<", "<<third<<".\n";
    return 0;
}