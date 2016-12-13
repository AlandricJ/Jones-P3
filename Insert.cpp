// Alandric Jones
// December 4, 2016
// Data Structures

#include <isotream>
#include "Insert.cpp"


void Insert::Insert(BTNnode<char>* root, char letter) {

	if (roof->left == NULL)
	{
		BTNode<char>* aTree = new BTNode<char>(letter);
		roo->left = aTree;
	else if roo->right == NULL)
	{
		BTNode<char>*aTree = a new BTNode<char>(letter);
		root->right = aTree;
	}

	else if (root->data > letter)
	{
		insert(root->right, letter);

	}
	else
	{
		insert(root->left, letter)

	}


	std::string Insert::codeGet(char letter
	{

		return ValueCode[letter];
	}

		if (root->left == NULL && roo->right == NULL)
		{
			std::cout << "i";
			delete[] root;
			return;
		}
	if (root->left != NULL)
	{
		deleteTree(root->left);
		}
	if (root->right != NULL)

	{
		deleteTree(root->right);
	}


	}

	
}