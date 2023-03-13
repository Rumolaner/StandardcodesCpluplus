// SCCplusplusSortBubble.h - Standard Codes C++ Bubble Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortBubble.h"

vector<int> SortBubble(chrono::high_resolution_clock::time_point starttime, vector<int> iList) {
	int iSwaps = 0;
	int iIterations = 0;

	write(starttime, "Start Bubble Sort");
	for (int i = iList.size() - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			iIterations++;
			write(starttime, to_string(iList[j]));
			if (iList[j] > iList[j+1]) {
				iSwaps++;
				write(starttime, "Swap " + to_string(iList[j]) + " and " + to_string(iList[j+1]));
				int temp = iList[j];
				iList[j] = iList[j+1];
				iList[j+1] = temp;
			}
		}

		write(starttime, "Next outer iteration");
	}
	write(starttime, "End Bubble Sort");
	write(starttime, "Iterations: " + to_string(iIterations));
	write(starttime, "Swaps: " + to_string(iSwaps));
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++){
		write(starttime, to_string(iList[i]));
	}
	return iList;
}