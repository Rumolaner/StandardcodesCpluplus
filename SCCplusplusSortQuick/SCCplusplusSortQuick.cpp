// SCCplusplusSortQuick.h - Standard Codes C++ Quick Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortQuick.h"

int Teile(chrono::high_resolution_clock::time_point starttime, vector<int>* iList, int iStart, int iEnd) {
	int iPivot = iList->at(iEnd);
	int i = iStart, j = iEnd - 1;

	write(starttime, "Start-Index: " + to_string(iStart));
	write(starttime, "End-Index: " + to_string(iEnd));
	write(starttime, "Pivot: " + to_string(iPivot));

	while (i < j) {
		while (i < j && iList->at(i) <= iPivot) {
			i++;
		}

		while (j > i && iList->at(j) > iPivot) {
			j--;
		}

		if (iList->at(i) > iList->at(j)) {
			write(starttime, "Swap values of i(" + to_string(i) + ") and j(" + to_string(j) + ") ");
			int iTemp = iList->at(i);
			iList->at(i) = iList->at(j);
			iList->at(j) = iTemp;
		}
	}

	write(starttime, "Check if value i(" + to_string(iList->at(i)) + ") > value iEnd(" + to_string(iList->at(iEnd)) + ")");
	if (iList->at(i) > iPivot) {
		int iTemp = iList->at(i);
		iList->at(i) = iList->at(iEnd);
		iList->at(iEnd) = iTemp;
	}
	else {
		i = iEnd;
	}

	return i;
}

vector<int>* SortQuick(chrono::high_resolution_clock::time_point starttime, vector<int> *iList, int iStart, int iEnd) {
	write(starttime, "Start Quick Sort");

	if (iStart < iEnd) {
		int iTeiler = Teile(starttime, iList, iStart, iEnd);
		iList = SortQuick(starttime, iList, iStart, iTeiler-1);
		iList = SortQuick(starttime, iList, iTeiler, iEnd);
	}

	write(starttime, "End Quick Sort");
	write(starttime, "New order:");
	for (int i = 0; i < iList->size(); i++) {
		write(starttime, to_string(iList->at(i)));
	}
	return iList;
}