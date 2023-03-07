// SCCplusplusCommon.h - Standard Codes C++ Common: contains common functions like write
#pragma once

#include <string>
#include <fstream>
#include <chrono>
extern "C++" __declspec(dllexport) void clear();
extern "C++" __declspec(dllexport) bool write(std::chrono::high_resolution_clock::time_point, std::string text);