// SCCplusplusSortSelection.h - Standard Codes C++ Selection Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortSelection.h"

vector<int> SortSelection(chrono::high_resolution_clock::time_point starttime, vector<int> iList) {
	write(starttime, "Start Selection Sort");

	for (int i = 0; i < iList.size() -2; i++) {
		write(starttime, "Start iterating outer loop");
		int iBig = NULL;
		for (int j = i + 1; j < iList.size() - 1; j++) {
			write(starttime, "Start iterating inner loop");
			if (iBig == NULL) {
				write(starttime, "First set iBig = " + to_string(j));
				iBig = j;
			}
			else if (iList[j] > iList[iBig]) {
				write(starttime, "Replace iBig with " + to_string(j));
				iBig = j;
			}
		}

		write(starttime, "Swap " + to_string(iBig) + "/" + to_string(iList[iBig]) + " with " + to_string(i) + "/" + to_string(iList[i]));
		int iSwap = iList[iBig];
		iList[iBig] = iList[i];
		iList[i] = iSwap;
	}

	write(starttime, "End Selection Sort");
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	return iList;
}