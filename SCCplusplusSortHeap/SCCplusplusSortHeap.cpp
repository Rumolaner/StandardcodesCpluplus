// SCCplusplusSortHeap.h - Standard Codes C++ Heap Sort implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSortHeap.h"

vector<int> Heapify(chrono::high_resolution_clock::time_point starttime, vector<int> iList, int iStart, int iEnd) {
	int iLChild = (iStart+1) * 2 - 1, iRChild = (iStart+1) * 2, iBiggest;

	iBiggest = iLChild;
	if (iRChild <= iEnd) {
		if (iList[iRChild] > iList[iLChild]) {
			write(starttime, "Right Child (" + to_string(iRChild) + "/" + to_string(iList[iRChild]) + ") is bigger than left Child (" + to_string(iLChild) + " / " + to_string(iList[iLChild]) + ")");
			iBiggest = iRChild;
		}
	}

	if (iLChild <= iEnd && iList[iStart] < iList[iBiggest]) {
		write(starttime, "Biggest Child (" + to_string(iBiggest) + "/" + to_string(iList[iBiggest]) + ") is bigger than Parent (" + to_string(iStart) + " / " + to_string(iList[iStart]) + ")");
		int temp = iList[iBiggest];
		iList[iBiggest] = iList[iStart];
		iList[iStart] = temp;

		write(starttime, "Heapify to the Bottom");
		iList = Heapify(starttime, iList, iBiggest, iEnd);
	}
	else {
		write(starttime, "Heapify finished");
	}

	return iList;
}

vector<int> SCCplusplusSortHeap(chrono::high_resolution_clock::time_point starttime, vector<int> iList) {
	write(starttime, "Start Heap Sort");

	write(starttime, "Initiate Heap");
	int iParents = (iList.size() - 1) / 2 - 1;
	for (int i = iParents; i >= 0; i--) {
		write(starttime, "Next Parent " + to_string(i) + " / " + to_string(iList[i]));
		iList = Heapify(starttime, iList, i, iList.size()-1);
	}

	//sort datas
	for (int i = iList.size() - 1; i > 0; i--) {
		write(starttime, "Swapping biggest Value on index 0 with last place");
		int temp = iList[0];
		iList[0] = iList[i];
		iList[i] = temp;

		write(starttime, "Heapify from top to bottom");
		iList = Heapify(starttime, iList, 0, i-1);
	}

	write(starttime, "End Heap Sort");
	write(starttime, "New order:");
	for (int i = 0; i < iList.size(); i++) {
		write(starttime, to_string(iList[i]));
	}
	return iList;
}