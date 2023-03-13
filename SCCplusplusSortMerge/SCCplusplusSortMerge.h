// SCCplusplusSortMerge.h - Standard Codes C++ Merge Sort implementation
#pragma once

#include <string>
#include<vector>
#include<chrono>
#include "../SCCplusplusCommon/SCCplusplusCommon.h"

using namespace std;

extern "C++" __declspec(dllexport) vector<int> SortMerge(chrono::high_resolution_clock::time_point, vector<int>);
