#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  int People;
 cout << "Prarieville Population Growth\n" << endl;
 cout << "(each * represents 1000 people)\n" << endl;
 
 ifstream inputFile;
 inputFile.open("People.txt");
 
 if (!inputFile)
 {
   cout << "Error opening file" << endl;
   exit(0);
 }
 
 while (!inputFile.eof())
 {
  for (int year=1; year <= 6; year++)
  {
    switch (year)
    {
      case 1: cout << "1910 ";
      break;
      case 2: cout << "1930 ";
      break;
      case 3: cout << "1950 ";
      break;
      case 4: cout << "1970 ";
      break;
      case 5: cout << "1990 ";
      break;
      case 6: cout << "2010 ";
      break;
    }
    
  inputFile >> People;
  
  while (People > 0)
  {
    cout << "*";
    People-=1000;
  }
  cout << endl;
  }
  
  inputFile.close();
 }
  return 0;
}
