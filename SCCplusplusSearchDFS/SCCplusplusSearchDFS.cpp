// SCCplusplusSearchDFS.h - Standard Codes C++ Depth-First Search implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSearchDFS.h"

SNode* SCCplusplusSearchDFS(chrono::high_resolution_clock::time_point starttime, SNode* stNode, int iSearch) {
	write(starttime, "Start Depth-First Search");
	write(starttime, "Searching for " + to_string(iSearch));
	
	SNode* found = NULL;
	stNode->Visited();
	write(starttime, "Current Node: " + to_string(stNode->Value()));
	for (int i = 0; i < stNode->GetNeighbors().size(); i++) {
		if (stNode->Value() == iSearch) {
			return stNode;
		}
		write(starttime, "Running trough the direct neighbors");
		if (!stNode->GetNeighbors()[i]->IsVisited()) {
			write(starttime, "Node not visited");
			found = SCCplusplusSearchDFS(starttime, stNode->GetNeighbors()[i], iSearch);
			if (found != NULL) {
				return found;
			}
		}
	}

	write(starttime, "End Breadt-First Search");
	if (found == NULL)
		write(starttime, "Element " + to_string(iSearch) + " not found");
	else
		write(starttime, "Element " + to_string(iSearch) + " found at node " + to_string(found->Value()));

	return NULL;
}
