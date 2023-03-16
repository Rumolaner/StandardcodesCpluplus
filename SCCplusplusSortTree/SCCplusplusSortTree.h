// SCCplusplusSortTree.h - Standard Codes C++ Binary Tree Sort implementation
#pragma once

#include <string>
#include<vector>
#include<chrono>
#include "../SCCplusplusCommon/SCCplusplusCommon.h"

using namespace std;

class TreeNode {
private:
	chrono::high_resolution_clock::time_point starttime;
	int value;
	TreeNode *left = NULL;
	TreeNode *right = NULL;

public:
	TreeNode(chrono::high_resolution_clock::time_point, int);
	void insert(int);
	vector<int> traverse();
};

extern "C++" __declspec(dllexport) vector<int> SCCplusplusSortTree(chrono::high_resolution_clock::time_point, vector<int>);
