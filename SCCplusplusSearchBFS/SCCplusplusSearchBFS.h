// SCCplusplusSearchBFS.h - Standard Codes C++ Breadth-First Search implementation
#pragma once

#include <string>
#include<vector>
#include<chrono>
#include "../SCCplusplusCommon/SCCplusplusCommon.h"

using namespace std;

extern "C++" __declspec(dllexport) int SCCplusplusSearchBFS(chrono::high_resolution_clock::time_point, vector<int>, int iSearch);
