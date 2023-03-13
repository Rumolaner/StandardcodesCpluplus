// SCCplusplusSortMerge.h - Standard Codes C++ Merge Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortMerge.h"

vector<int> SortMerge(chrono::high_resolution_clock::time_point starttime, vector<int> iList) {
	write(starttime, "New function call - Start Merge Sort");
	write(starttime, "Given List:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	if (iList.size() == 1) {
		return iList;
	}

	int index = iList.size() / 2 - 1;

	vector<int> iLList, iRList, iNList;
	for (int i = 0; i < iList.size(); i++) {
		if (i <= index)
			iLList.push_back(iList[i]);
		else
			iRList.push_back(iList[i]);
	}

	iLList = SortMerge(starttime, iLList);
	iRList = SortMerge(starttime, iRList);

	while (iLList.size() > 0 && iRList.size() > 0) {
		if (iLList[0] > iRList[0]) {
			iNList.push_back(iLList[0]);
			iLList.erase(iLList.begin());
		}
		else {
			iNList.push_back(iRList[0]);
			iRList.erase(iRList.begin());
		}
	}

	while (iLList.size() > 0) {
		iNList.push_back(iLList[0]);
		iLList.erase(iLList.begin());
	}
	
	while (iRList.size() > 0) {
		iNList.push_back(iRList[0]);
		iRList.erase(iRList.begin());
	}

	write(starttime, "End Merge Sort");
	write(starttime, "New order:");
	for (int i = 0; i < iNList.size(); i++) {
		write(starttime, to_string(iNList[i]));
	}
	return iNList;
}