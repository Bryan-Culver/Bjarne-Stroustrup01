/* HelloWorld.cpp: This is an introductory program from chapter 2, and continued 
 * in Chapter 3.
 * Author: Bryan Culver
 * Date created: 11/02/2020
 * Version: 1.1 11/03/2020
 */

#include "../../std_lib_facilities.h"

int main()
{
	cout << "Please enter your first name and your age:\n";	// prints to output
	
	// instantiate variables
	string first_name = "???";
	double age = -1;

	// read input from user
	cin >> first_name;
	cin >> age;

	// Take submitted age and convert to months
	int months = age*12;

	cout << "Hello, " << first_name << "(age " << age << ")!\n";
	cout << "You are "<<months<<" months old.\n";
	return 0;
}

