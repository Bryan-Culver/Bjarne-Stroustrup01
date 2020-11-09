// Inputgames takes user input and demonstrates concepts of Objects, Types, and Values
// Author: Bryan Culver
// Date Created: 09 Nov 2020
// Date Modified: 09 Nov 2020
// Version: 0.2 09 Nov 2020

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
    cout << "\nDear " << firstName << ",\n";
    cout << "How have you been? I'm sorry it's been so long since we have corresponded.";
    cout << "\nHave you seen " << friendName << " recently? We bumped into each other the other day.\n";
    if (friendGender=="m")
        cout << "If you see " << friendName << ", please ask him to call me, I think I still have his thermos.\n";
    else if (friendGender=="f")
        cout << "If you see " << friendName << ", please ask her to call me, I think I still have her thermos.\n";

    /*cout << "Please enter a floating-point value: ";
    int n;
    cin >> n;
    double nn = n;
    cout << "n == " << n 
        << "\nn+1 == " << n+1
        << "\nthree times n == " << 3*n
        << "\ntwice n == " << n+n
        << "\nn squared == " << n*n 
        << "\nhalf of n == " << n/2 
        << "\nsquare root of n == " << sqrt(nn)
        << endl;
*/
    
}