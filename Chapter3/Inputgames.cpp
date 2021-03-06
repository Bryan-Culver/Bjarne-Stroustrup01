// Inputgames takes user input and demonstrates concepts of Objects, Types, and Values. 
// For reference, this follows the drills starting on page 83. 
// Author: Bryan Culver
// Date Created: 09 Nov 2020
// Date Modified: 09 Nov 2020
// Version: 1.0 09 Nov 2020

#include "../std_lib_facilities.h"

int main() 
{
    cout << "Enter the first and second name of the person you're writing to:\n";
    string firstName = "??";
    string lastName = "??";
    cin >> firstName >> lastName;
    string name = firstName + ' ' + lastName;
    cout << "Provide the name of a friend:\n";
    string friendName = "??";
    cin >> friendName;
    cout << "Enter 'm' if the friend is a male, or 'f' if the friend is female:\n";
    char friendGender = 0;
    cin >> friendGender;
    cout << "Enter the age of the person you're writing to:\n";
    int age = -1;
    cin >> age;
    cout << "\nDear " << firstName << ",\n";
    cout << "How have you been? I'm sorry it's been so long since we have corresponded.";
    cout << "\nHave you seen " << friendName << " recently? We bumped into each other the other day.\n";
    if (friendGender=='m')
        cout << "If you see " << friendName << ", please ask him to call me, I think I still have his thermos.\n";
    else if (friendGender=='f')
        cout << "If you see " << friendName << ", please ask her to call me, I think I still have her thermos.\n";
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age<0 | age>110) simple_error("you're kidding!");
    if (age<12) cout << "Next year you will be "<<age+1<<".\n";
    if (age==17) cout << "Next year, you will be able to vote.\n";
    if (age>70) cout << "I hope you are enjoying retirement.\n";
    cout << "Yours Truely, \n\nBryan Culver";
    return 0;
}