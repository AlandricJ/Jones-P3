#pragma once

// Alandric Jones
// December 4, 2016
// Data Structures

#include <iostream>
#include "Binary_Tree.h"


using namespace std;

class MorseCode
{

private:
	
	
	
	bool addRecurs(BTNode <char>* theNode, char, int index, string theCode, theData);
	bool checkSyntax(string inputIS);
	string theSymbols = "";
	Binary_Tree <char> treeCode;
	int theCount = 0;
	void addMorseCode(string inputIS );
	void treeRecurs(int);
	





public: 

	
	
	
	void treeOutput(ostream& theStream);
	MorseCode();
	MorseCode(istream& theStream);
	string decode(string input);
	string encode(string input);
	void treeCode();


};




