// SCCplusplusSortInsert.h - Standard Codes C++ Insertion Sort implementation
#pragma once

#include <string>
#include<vector>
#include<chrono>
#include "../SCCplusplusCommon/SCCplusplusCommon.h"

using namespace std;

extern "C++" __declspec(dllexport) vector<int> SCCplusplusSortInsert(chrono::high_resolution_clock::time_point, vector<int>);
