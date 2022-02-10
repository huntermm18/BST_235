#ifndef NODE_H
#define NODE_H

using namespace std;
#include <iostream>
#include "NodeInterface.h"


class Node : public NodeInterface {

public: 

	int data;
	Node *left;
	Node *right;


	Node(int startNum) {
		data = startNum;
	}

	virtual ~Node() {}

	/*
	* Returns the data that is stored in this node
	*
	* @return the data that is stored in this node.
	*/
	virtual int getData() const;

	/*
	* Returns the left child of this node or null if it doesn't have one.
	*
	* @return the left child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getLeftChild() const;

	/*
	* Returns the right child of this node or null if it doesn't have one.
	*
	* @return the right child of this node or null if it doesn't have one.
	*/
	virtual NodeInterface * getRightChild() const;

};


#endif