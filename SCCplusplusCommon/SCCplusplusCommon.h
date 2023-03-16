// SCCplusplusCommon.h - Standard Codes C++ Common: contains common functions like write
#pragma once

#include <string>
#include <fstream>
#include <chrono>

class __declspec(dllexport) SNode {
private:
	std::chrono::high_resolution_clock::time_point starttime;
	int value;
	SNode* left = NULL;
	SNode* right = NULL;

public:
	SNode(std::chrono::high_resolution_clock::time_point, int);
};

extern "C++" __declspec(dllexport) void clear();
extern "C++" __declspec(dllexport) bool write(std::chrono::high_resolution_clock::time_point, std::string text);