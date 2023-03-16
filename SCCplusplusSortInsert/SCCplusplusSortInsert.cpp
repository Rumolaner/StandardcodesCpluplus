// SCCplusplusSortInsert.h - Standard Codes C++ Insertion Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortInsert.h"

vector<int> SCCplusplusSortInsert(chrono::high_resolution_clock::time_point starttime, vector<int> iList) {
	int iSwaps = 0;
	int iIterations = 0;

	write(starttime, "Taking first value as start for sorted list");
	write(starttime, "Start Insertion Sort");
	for (int i = 1; i < iList.size(); i++) {
		int value = iList[i];
		int j = i;
		write(starttime, "Value: " + to_string(value));
		while (j > 0 && iList[j-1] > value) {
			iIterations++;
			iSwaps++;
			write(starttime, "Swap " + to_string(iList[j]) + " and " + to_string(iList[j - 1]));
			int temp = iList[j];
			iList[j] = iList[j - 1];
			iList[j - 1] = temp;
			j--;
		}

		write(starttime, "Next outer iteration");
	}
	write(starttime, "End Insertion Sort");
	write(starttime, "Iterations: " + to_string(iIterations));
	write(starttime, "Swaps: " + to_string(iSwaps));
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	return iList;
}