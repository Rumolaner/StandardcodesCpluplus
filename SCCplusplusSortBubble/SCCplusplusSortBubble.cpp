// SCCplusplusSortBubble.h - Standard Codes C++ Bubble Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortBubble.h"

bool SortBubble(chrono::high_resolution_clock::time_point starttime, int iSearch, vector<int> iList) {
	write(starttime, "Starte Bubble Sort");
	for (int i = 0; i < iList.size() - 1; i++) {
		write(starttime, to_string(iList[i]));
	}
	return true;
}