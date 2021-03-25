#pragma once
#include <string>
#include <vector>
#include "ActorNode.h"

class Map
{
public:
	Map();
	
	/// <summary> 
	/// Export final result .srmap file
	/// </summary>
	void exportMap();
	void importMap();
				  
	
	std::string mapName;
	std::string mapCompatibleVersion;

	std::vector<ActorNode*> actorNodeList;
};

