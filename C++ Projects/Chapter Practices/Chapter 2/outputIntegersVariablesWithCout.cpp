// This program has variables of several of the integer types.
#include <iostream>
using namespace std;

int main()
{
	int checking;
	unsigned int miles;
	long days;
	
	checking = -20;
	miles = 4276;
	days = 192000;
	
	cout << "We have ade a long journey of " << miles << " miles.";
	cout << "\nOur checking account balance is " << checking;
	cout << "\nAbout " << days << " days ago in Columbus ";
	cout << "stood on this spot.\n";
	return 0;
}
