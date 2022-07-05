#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	int num1, num2, studentAnswer, sum;
	
	srand(time(0));
	num1 = rand() % 9 + 1;
	num2 = rand() % 9 + 1;
	
	cout << "  " << num1 << endl;
	cout << "+ " << num2 << endl;
	cout << " __\n ";
	cin >> studentAnswer;
	
	sum = num1 + num2;
	if (studentAnswer == sum)
		cout << "\nCongratulations! " << studentAnswer << " is the correct answer.\n";
	else
		{
		cout << "\nIncorrect answer!\n";
		cout << num1 << " + " << num2 << " = " << sum << endl;
		}	
	return 0;
}
