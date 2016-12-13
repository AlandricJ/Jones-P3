// Alandric Jones
// December 4, 2016
// Data Structures

#include "Morse.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()

{
	char input[256];
	int choice;
	MorseCode theTree;
	string pathFile;
	ifstream fin;


	while(true)
	{

		cout << "Please enter what you would like to see ?" << endl;
		cout << "Decode the message" << endl;
		cout << "Endcode the message" << endl;
		cout << "Would you like to exit?" << endl;

		cin >> choice;

		switch (choice)
// This is the deconder
	case1:
		cin.ignore();
		cout << "Please enter your message to decode" << endl;
		cin.getline(input, 256);
		cout << endl << "Decode" << theTree.decode(input) << endl;
		break;
//This is the encoder
	case2:
		cin.ignore();
		cout << "Please enter your message to encode" << endl;
		cin.getline(input, 256);
		cout << endl << "Encode" << theTree.encode(input) << endl;
		break;


// This is the exit stage right
	case3:

		return 0;
		cout << "The command you have enetered is invalid. Please enter a valid command. (1, 2, or maybe 3)" << endl;
			break;
		



	while (!fin.good())

	{
		cout << "Invalid path file, please try again."
			cin >> pathFile;
		fin.open(pathFile);

	} // Lets you know then the path is invalid and cant go on

	theTree.treeCode(fin);
	theTree.tOutput(cout);
	cin.ignore();

}












}