
// Alandric Jones
// December 4, 2016
// Data Structures

#include <string>
#include "Morse.h"
#include "dotsNDashes.h"


// Checks to make sure if all syntax is correct
bool MorseCode::checkSyntax(string theInput)

{
	bool return = true;

	if (inputIs.length() < 3) { // if statement that checks the length
		cout << "This line is too short. Please try again" << endl;
		return = false;
	}

	else if (inputIs).length() > 6 {
		cout << " This line is too short. Please try again." << endl;
		return = false;
	}

	else if (inputIs[0]) == ' '){
	cout << " This line does not begin with any symbole. Please try again." << endl;
	return = false;
	}

	else if (theAlphabet.find(theInput[0]).length() > 6 { // if statment that find the character in the alphabet
		cout << " This line contains invalid characters. Please try agin." << endl;
		return = false;
	}

	else if (inputIs).length() > 6 {
		cout << " This line is  has a multi character or does no seperate. Please try again." << endl;
		return = false;

	}

	for (string;;iterator itr = input.begin(); itr != input.end(); ++itr)
	{
		if (theDashes.find(*itr) != -1)

		{
			current = current - > right;

		}

		else if (theDots.find(*itr) != -1)
	}
		current = current->left;
		}
			
else if (itr == ' ')

	if(current !=treCode.getRoot())
		solution += current->data;

		current = treeCode.getRoot();
}

if (current == NULL){

	return "Invalid Character";



string MorseCode::decode( string input) {

	BTNode<char>* current = codeTree.getRood();
	string solution;


}
MorseCode::MorseCode() {

	while (!theStream.eof())
	{

		theCount++; // Increments the counter for the line
		getline(theStream, lineTemp);
		if (checkSyntax(lineTemp))
		{
			addMorseCode(lineTemp);
		}

		theSymbols = "";
		theCount = 0;

	}
}

void MorseCode::addMorseCode(string inputIs) {

	char theData = tolower(inputIs[0]);
	string theCode = inputIs.substr(2, 4);
	if (theSymbols.find(theData) == string::npos)
	{
		if (addRecurs(theData, theCode, 0, treeCode.getRoot()))
			theSymbols += theData;
	}
	else
	{
		cout << " This symbol has already been added" << endl;
	}


}

bool MorseCode::addRecurs(char theData, string theCOde, int index, BTNode<chard>*the Node) {

	if (index == theCode.length()) {

		if (theNode->data != '\0')

		{
			cout << " This contains code that has already been used before" << endl;
			return false;
		}
		else
		{
			theNode->data = theData;
			return true;
		}
	}
	else {
		char codePart = theCode[index];
		if (theDots.find(codePart)) != string::npos)
	{
		if (theNode->;eft == NULL)

		{
			theNode - > left = new BTNode <char>('\0');
			theNode = theNode->right;
		}
			return addRecurs(theData, theCOde, index + 1, theNode)
	}


	}
}

void MorseCode::treeOutput(ostream& theStream) {
	
	size_t width, temp
	
		if (treeCode.isnull()) {

			theStream << "This tree is empty" << endl;

	}

		else {
			tOutput(0, width, temp, treeCode.getRoot(), tOutputArray);

		}
		for (int t = 0; t < tOutputArray.size(); t++)

		{
			theStream << endl;
			for (int a = 0; a < width; a++)
		}
}





bool MorseCode::theEncoder(string&input, BTNode<char>* root, char letter) {

	if (root->left == NULL && root->right == NULL)
		return false;
	else if (root->left != NULL && root->right != NULL)
	{
		if (root->left->data == letter)
		{
			input = input + theDashes[0];
		else if (root->right->data == letter)
		{
			input = input + theDots[0];
			return true;
		}
		else if (encoder(input, root->left, letter))
		{
			input = input + theDots[0];

		}
		else if (encoder(input, root->right, letter))
		{
			input = input + theDashes[0];

		}
		}
		else if (root - > left->data == letter && encoder(input, root->left, letter))
		{
			input = input + theDashes;
			return true;
		}
		else if (root->left == NULL && ((root->right->data == letter && encoder(input, root->left, letter)))
		{
			input = input + theDots[0];
			return true;

		else // if the arent any characters in the tree, return false
			return false;

		}
	}
MorseCode::MorseCode() {

		treeCodeSet(theStream); // this will add the code
		MorseCode();
	}
}

MorseCode::MorseCode() {
	treeCode = Binary_Tree<char>('\0'); // initializes the tree who has no character
}