// SCCplusplusSortBubbleopt.h - Standard Codes C++ optimized Bubble Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortBubbleopt.h"

bool SortBubbleopt(chrono::high_resolution_clock::time_point starttime, int iSearch, vector<int> iList) {
	int iSwaps = 0;
	int iIterations = 0;
	bool swapped = false;
	write(starttime, "Start optimized Bubble Sort");
	for (int i = iList.size() - 1; i > 0; i--) {
		swapped = false;
		for (int j = 0; j < i; j++) {
			iIterations++;
			write(starttime, to_string(iList[j]));
			if (iList[j] > iList[j + 1]) {
				iSwaps++;
				swapped = true;
				write(starttime, "Swap " + to_string(iList[j]) + " and " + to_string(iList[j + 1]));
				int temp = iList[j];
				iList[j] = iList[j + 1];
				iList[j + 1] = temp;
			}
		}

		if (!swapped) {
			write(starttime, "No change, sorting finished");
			break;
		}
		write(starttime, "Next outer iteration");
	}
	write(starttime, "End optimized Bubble Sort");
	write(starttime, "Iterations: " + to_string(iIterations));
	write(starttime, "Swaps: " + to_string(iSwaps));
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	return true;
}