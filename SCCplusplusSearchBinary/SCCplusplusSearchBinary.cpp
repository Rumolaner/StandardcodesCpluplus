// SCCplusplusSearchBinary.h - Standard Codes C++ Binary Search implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSearchBinary.h"

int SearchBinary(chrono::high_resolution_clock::time_point starttime, vector<int> iList, int iSearch) {
	int found = NULL;
	write(starttime, "Start Binary Search");
	write(starttime, "Searching for " + to_string(iSearch));

	int iStart = 0, iEnd = iList.size() - 1;

	if (iSearch < iList[iStart] || iSearch > iList[iEnd]) {
		write(starttime, "Search value smaller or bigger than listed values");
		return found;
	}

	while (iStart < iEnd && !found) {
		int iCheck = (iStart + iEnd) / 2;
		write(starttime, "Check index: " + to_string(iCheck));
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

	write(starttime, "End Binary Search");
	if (found == NULL)
		write(starttime, "Element " + to_string(iSearch) + " not found");
	else
		write(starttime, "Element " + to_string(iSearch) + " found at index " + to_string(found));

	return found;
}