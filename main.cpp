/*
	191
	main
	string handling
	pjirele

*/

#include <iostream>
#include <string>

using namespace std;

int main()
{

	string twoPartName, threePartName;
	
	// inputs
	cout << "Enter a two part name: ";
	getline(cin, twoPartName);
	cout << "Expected:" << endl;
	cout << "Properly capatilzed two part name:" << endl;
	cout << "Actual: " << endl;

	// making two part name right
	for (int i = 0; i < twoPartName.length(); i++)
	{
		twoPartName[i] = tolower(twoPartName[i]);

	}// end for loop

	twoPartName[0] = toupper(twoPartName[0]);
	int blnkPos = twoPartName.find(' ');
	twoPartName[blnkPos + 1] = toupper(twoPartName[blnkPos + 1]);
	cout << twoPartName;
	
	
	cout << endl;
	cout << endl;
	cout << endl;

	// three part name
	cout << "Enter a three part name: ";
	getline(cin, threePartName);
	cout << "Expected: " << endl;
	cout << "Properly capatilzed three part name:" << endl;
	cout << "Actual: " << endl;

	
	// making three part name right
	for (int o = 0; o < threePartName.length(); o++)
	{
		threePartName[o] = tolower(threePartName[o]);

	}// end for loop

	threePartName[0] = toupper(threePartName[0]);
	int blnkPos2 = threePartName.find(' ');
	threePartName[blnkPos2 + 1] = toupper(threePartName[blnkPos2 + 1]);

	int blnkPos3 = threePartName.find(' ', blnkPos2 + 1);
	threePartName[blnkPos3 + 1] = toupper(threePartName[blnkPos3 + 1]);

	
	cout << threePartName;


} // end main