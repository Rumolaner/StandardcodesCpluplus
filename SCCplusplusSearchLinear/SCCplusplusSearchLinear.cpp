// SCCplusplusSearchLinear.h - Standard Codes C++ Linear Search implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSearchLinear.h"

int SCCplusplusSearchLinear(chrono::high_resolution_clock::time_point starttime, vector<int> iList, int iSearch) {
	int found = NULL;
	write(starttime, "Start Linear Search");
	write(starttime, "Searching for " + to_string(iSearch));
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, "Checking value " + to_string(iList[i]));
		if (iList[i] == iSearch) {
			found = i;
			break;
		}
	}

	write(starttime, "End Linear Search");
	if (found == NULL)
		write(starttime, "Element " + to_string(iSearch) + " not found");
	else
		write(starttime, "Element " + to_string(iSearch) + " found at index " + to_string(found));

	return found;
}