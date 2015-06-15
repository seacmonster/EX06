//Colin Bondy
//EX06_01

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Not 100% sure if this works. Windows 10 seems to have changed pathing or has done something different to hide some of that from the user.
int main()
{
	ifstream fin;
	string fileName;
	int countchar = 0;
	cout << "Please enter a file name\n";
	cin >> fileName;
	
	fin.open(fileName);

	if (!fin) //If file does not exist exits
	{
		cout << "File does not exist" << endl;
		return 0;
	}



	while (!fin.eof()) // Continues until all characters have been counted
	{
		fin.get();
		countchar++;
	}


	fin.close(); //Closes file

	cout << "There are " << countchar << " characters" << endl; //returns number of characters
	return 0;
}
