// SCCplusplusSortLinear.h - Standard Codes C++ Sort Linear: contains all Functions for the linear sorting algorythm
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusCommon.h"

using namespace std;

void clear() {
	string filename = "output.txt";
	fstream file_out;
	file_out.open(filename.c_str(), ios::out);
	file_out.close();
}

bool write(chrono::high_resolution_clock::time_point starttime, string text) {
	string filename = "output.txt";
	fstream file_out;
	file_out.open(filename.c_str(), ios::app);
	if (!file_out.is_open()) {
		return false;
	}
	else {
		chrono::high_resolution_clock::time_point timestamp = chrono::high_resolution_clock::now();
		chrono::duration<double> time_span = chrono::duration_cast<chrono::duration<double>>(timestamp - starttime);
		file_out << time_span.count() << ": " << text << endl;
		file_out.close();

		return true;
	}
}