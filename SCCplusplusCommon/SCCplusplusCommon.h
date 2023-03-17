// SCCplusplusCommon.h - Standard Codes C++ Common: contains common functions like write
#pragma once

#include <string>
#include <fstream>
#include <chrono>
#include<vector>

class __declspec(dllexport) SNode {
private:
	std::chrono::high_resolution_clock::time_point starttime;
	int value;
	bool visited = false;
	std::vector<SNode*> neighbors;

public:
	SNode(std::chrono::high_resolution_clock::time_point, int);
	void AddNeighbor(SNode*);
	void AddNeighborBack(SNode*);
	std::vector<SNode*> GetNeighbors();
	void Visited();
	bool IsVisited();
	int Value();
};

extern "C++" __declspec(dllexport) void clear();
extern "C++" __declspec(dllexport) bool write(std::chrono::high_resolution_clock::time_point, std::string text);