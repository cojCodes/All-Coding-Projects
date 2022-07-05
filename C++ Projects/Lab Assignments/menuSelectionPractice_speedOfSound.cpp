#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	// Define The Data-Type
	float airTime, waterTime, steelTime;
	float distance, time;
	char userInput;
	
	// Assign Constant Values
	float airSpeed = 1100;
	float waterSpeed = 4900;
	float steelSpeed = 16400;
	
	// Opening Prompt
	cout << "Welcome to the Speed of Sound Calculator!\n" << endl;
	
	cout << "******************************************" << endl;
	
	cout << "Which media is sound traveling through?\n" << endl;
	
	// Menu Selection
	cout << "a: Air" << endl;
	cout << "w: Water" << endl;
	cout << "s: Steel" << endl;
	
	cout << "\n" << endl;
	
	// Getting User's Selection
	cin >> userInput;
	cout << "\n";
	
	// Gathering Distance Data from User
	
	// Distance Prompt
	cout << "What is the distance it should travel?" << endl;
	cout << "(This must be a positive distance...In Feet...)" << endl;
	
	cout << "\n" << endl;

	// Distance Input
	cin >> distance;
	
	cout << "\n"; 
	
	// Time Calculations
	airTime = distance / airSpeed;
	waterTime = distance /  waterSpeed;
	steelTime = distance / steelSpeed;	
	
	// If-Else Statments for each Selection
	if (userInput == 'a')

		cout << "The Speed within Air is: " << airSpeed << " ft/s"<< "\n" << "The time it takes is: " << airTime << " seconds" << endl;
		
	else if (userInput == 'w')
		cout << "The Speed within Water is: " << waterSpeed << " ft/s" << "\n" << "The time it takes is " << waterTime<< " seconds" << endl;
		
	else if (userInput == 's')
		cout << "The Speed within Steel is: " << steelSpeed << " ft/s" << "\n" << "The time it takes is " << steelTime << " seconds" << endl;	
	
	cout << "\n" << endl;
	

	cout << "Thanks for Using the Speed of Sound Calculator!" << endl;
	
}
