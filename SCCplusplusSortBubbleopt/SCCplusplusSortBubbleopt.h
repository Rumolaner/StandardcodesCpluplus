// SCCplusplusSortBubble.h - Standard Codes C++ optimized Bubble Sort implementation
#pragma once

#include <string>
#include<vector>
#include<chrono>
#include "../SCCplusplusCommon/SCCplusplusCommon.h"

using namespace std;

extern "C++" __declspec(dllexport) bool SortBubbleopt(chrono::high_resolution_clock::time_point, int, vector<int>);
