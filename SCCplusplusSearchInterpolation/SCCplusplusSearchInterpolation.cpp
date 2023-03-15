// SCCplusplusSearchBinary.h - Standard Codes C++ Binary Search implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSearchInterpolation.h"

int SearchInterpolation(chrono::high_resolution_clock::time_point starttime, vector<int> iList, int iSearch) {
	int found = NULL;
	write(starttime, "Start Interpolation Search");
	write(starttime, "Searching for " + to_string(iSearch));

	write(starttime, "Init Start and End");
	int iStart = 0;
	int iEnd = iList.size() - 1;

	while (iStart < iEnd && iList[iStart] < iSearch && iList[iEnd] > iSearch ) {
		int iCheck = iStart + (iEnd - iStart) * (iSearch - iList[iStart]) / (iList[iEnd] - iList[iStart]);
		write(starttime, "Check Index/Value: " + to_string(iCheck) + "/" + to_string(iList[iCheck]));

		if (iList[iCheck] == iSearch) {
			found = iCheck;
			break;
		}

		if (iList[iCheck] < iSearch) {
			iStart = iCheck;
		}

		if (iList[iCheck] > iSearch) {
			iEnd = iCheck;
		}
	}

	write(starttime, "End Interpolation Search");
	if (found == NULL)
		write(starttime, "Element " + to_string(iSearch) + " not found");
	else
		write(starttime, "Element " + to_string(iSearch) + " found at index " + to_string(found));

	return found;
}