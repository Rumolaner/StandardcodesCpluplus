// SCCplusplusSortTree.h - Standard Codes C++ Binary Tree Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortTree.h"

TreeNode::TreeNode(chrono::high_resolution_clock::time_point starttime, int value) {
	write(this->starttime, "Create new Node, Value: " + to_string(value));
	this->starttime = starttime;
	this->value = value;
}

void TreeNode::insert(int value) {
	write(this->starttime, "Insert new Value: " + to_string(value));
	if (value < this->value) {
		write(this->starttime, "New value is smaller than " + to_string(this->value));
		if (this->left == NULL) {
			this->left = new TreeNode(this->starttime, value);
		}
		else {
			this->left->insert(value);
		}
	}
	else {
		write(this->starttime, "New value is bigger or equal than " + to_string(this->value));
		if (this->right == NULL) {
			this->right = new TreeNode(this->starttime, value);
		}
		else {
			this->right->insert(value);
		}
	}
}

vector<int> TreeNode::traverse() {
	vector<int> iList, iLList, iRList;

	if (this->left != NULL)
		iLList = this->left->traverse();
	iLList.push_back(this->value);
	if (this->right != NULL)
		iRList = this->right->traverse();

	iList.reserve(iLList.size() + iRList.size());
	iList.insert(iList.end(), iLList.begin(), iLList.end());
	iList.insert(iList.end(), iRList.begin(), iRList.end());

	return iList;
}

vector<int> SortTree(chrono::high_resolution_clock::time_point starttime, vector<int> iList) {
	write(starttime, "Start Binary Tree Sort");
	TreeNode node = TreeNode(starttime, iList[0]);
	for (int i = 1; i < iList.size(); i++) {
		node.insert(iList[i]);
	}

	iList = node.traverse();
	write(starttime, "End Binary Tree Sort");
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	return iList;
}