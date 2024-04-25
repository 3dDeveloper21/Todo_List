/*
	Objective: 
	1. Have user read Todo list
	2. Update an existing list item
	3. Add a new item to the list
	4. delete an item from the list
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// 1. Read file:
	// a) file name
	// b) create obj and open file
	// c) if file opens then read its items and print to the console
	// d) close file
	string fileName = "todo.txt";
	string fileItem;
	fstream readFile;
	readFile.open(fileName);
	
	if (readFile.is_open())
	{
		while (readFile)
		{
			getline(readFile, fileItem);
			cout << fileItem << endl;
		}
	}
	else
	{
		cout << "File did not open." << '\n';
		exit(-1);
	}

	readFile.close();

	return 0;
}