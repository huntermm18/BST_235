#include "BST.h"

set<int> inTree;

	// Node *BST::getRootNode() {
	// 	return root; 
	// }

	

	bool BST::add(int data) {
		return addHelper(root, data);
		// bool added = ::insert(root, data);
		// if(added) {return true;}
		// else {return false;}

		// cout << "add"<<endl;
	  //   Node *ptr = new Node(data);
	  //   ptr->left = NULL; // To test that the friend relationship works
	  //   NodeInterface *rval = ptr->getLeftChild();
	  //   long value = (long)rval;
	  //   cout << "Added "<<value<<endl;
	  //   root = ptr;

	}


	bool BST::remove(int data) {
		return true;
	}


	void BST::clear() {
	
	}

   bool BST::addHelper(Node *local_root, int item) {
      if (inTree.find(item) != inTree.end()) {
         cout << "already in tree: " << item << endl;
         return false;
      }

      if (local_root == NULL) {
         local_root = new Node(item);
         cout << "added: " << item << endl;
         inTree.insert(item);
         return true;
      }
      else {
         if (item < local_root->data) {
            return addHelper(local_root->left, item);
         }
         else if (item > local_root->data) {
            return addHelper(local_root->right, item);
         }
         else {
            cout << "didn't add: " << item << endl;
            return false;
         }
      }
   }



	bool BST::remove(int data) {
		return true;
	}


	void BST::clear() {
	
	}