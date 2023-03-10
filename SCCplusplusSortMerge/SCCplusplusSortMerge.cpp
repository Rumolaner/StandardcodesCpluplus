// SCCplusplusSortMerge.h - Standard Codes C++ Merge Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortMerge.h"

bool SortMerge(chrono::high_resolution_clock::time_point starttime, int iSearch, vector<int> iList) {
	int iSwaps = 0;
	int iIterations = 0;

	write(starttime, "Start Merge Sort");
/*	for (int i = 1; i < iList.size(); i++) {
		int value = iList[i];
		int j = i;
		write(starttime, "Value: " + to_string(value));
		while (j > 0 && iList[j - 1] > value) {
			iIterations++;
			iSwaps++;
			write(starttime, "Swap " + to_string(iList[j]) + " and " + to_string(iList[j - 1]));
			int temp = iList[j];
			iList[j] = iList[j - 1];
			iList[j - 1] = temp;
			j--;
		}

		write(starttime, "Next outer iteration");
	}*/

	write(starttime, "End Merge Sort");
	write(starttime, "Iterations: " + to_string(iIterations));
	write(starttime, "Swaps: " + to_string(iSwaps));
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	return true;
}