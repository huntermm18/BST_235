#ifndef BST_H
#define BST_H

using namespace std;
#include "BSTInterface.h"
#include "Node.h"
#include <iostream>
#include <set>

class BST : public BSTInterface {

protected:
	Node *root;


public:


	BST() {
		root = NULL;
	}

	BST(Node *startRoot) {
		root = startRoot;
	}

	~BST() {
	}

	//Please note that the class that implements this interface must be made
	//of objects which implement the NodeInterface

	/*
	* Returns the root node for this tree
	*
	* @return the root node for this tree.
	*/
	Node * getRootNode() const override {
		return root;
	}

	/*
	* Attempts to add the given int to the BST tree
	*
	* @return true if added
	* @return false if unsuccessful (i.e. the int is already in tree)
	*/
	bool add(int data) override;

	bool addHelper(Node *local_root, int item);


	/*
	* Attempts to remove the given int from the BST tree
	*
	* @return true if successfully removed
	* @return false if remove is unsuccessful(i.e. the int is not in the tree)
	*/
	bool remove(int data);

	/*
	* Removes all nodes from the tree, resulting in an empty tree.
	*/
	void clear();

};
#endif