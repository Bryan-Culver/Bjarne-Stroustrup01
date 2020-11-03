/* HelloWorld.cpp: This is an introductory program from chapter 2, and continued 
 * in Chapter 3.
 * Author: Bryan Culver
 * Date created: 11/02/2020
 * Version: 1.1 11/03/2020
 */

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name (followed by 'enter'):\n";	// prints to output
	string first_name; 			// first_name is a variable of type string
	cin >> first_name;			// reads characters into first_name
	cout >> "Hello, " << first_name << "!\n";
	return 0;
}

