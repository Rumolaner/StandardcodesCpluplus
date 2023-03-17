// SCCplusplusSearchDFS.h - Standard Codes C++ Depth-First Search implementation
#pragma once

#include <string>
#include<vector>
#include<chrono>
#include "../SCCplusplusCommon/SCCplusplusCommon.h"

using namespace std;

extern "C++" __declspec(dllexport) SNode* SCCplusplusSearchDFS(chrono::high_resolution_clock::time_point, SNode*, int iSearch);
