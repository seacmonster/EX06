//Colin Bondy
//Ex06_01

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL)); //For random input
	
	int x = 0;
	fstream iofile("Exercise13_1.txt", ios::in | ios::out);
	
	if (!iofile) //Checks if file has been created if not it creates a new file
	{
		iofile.open("Exercise13_1.txt", ios::out);
	}

	else //If there is a file it appends new data to the end
	{
		cout << "Appending Data\n";
		iofile.clear();
		iofile.seekp(0, ios::end);
	}
		
	
	for (int i = 0; i < 100; i++) //Writes 100 random ints into the file.
	{
		x = rand() % 100;
		iofile << x << " ";
	}

	

}