// SCCplusplusSearchBFS.h - Standard Codes C++ Breadth-First Search implementation
#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier
#include "SCCplusplusSearchBFS.h"

SNode* SCCplusplusSearchBFS(chrono::high_resolution_clock::time_point starttime, SNode* stNode, int iSearch) {
	write(starttime, "Start Breadt-First Search");
	write(starttime, "Searching for " + to_string(iSearch));
	
	SNode* found = NULL;
	vector<SNode*> toVisit;
	toVisit.push_back(stNode);
	stNode->Visited();

	while (toVisit.size() > 0) {
		SNode* node = toVisit[0];
		toVisit.erase(toVisit.begin());
		write(starttime, "Next iteration: " + to_string(node->Value()));
		node->Visited();
		if (node->Value() == iSearch) {
			found = node;
			break;
		}



		for (int i = 0; i < node->GetNeighbors().size(); i++) {
			if (!node->GetNeighbors()[i]->IsVisited()) {
				write(starttime, "Node not visited, push to list");
				toVisit.push_back(node->GetNeighbors()[i]);
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