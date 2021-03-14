#pragma once
#include <string>
#include <vector>


#include "ComponentNode.h"
#include "VariableNode.h"


class ActorNode{
public:
	ActorNode() = default;
	std::vector<IVariable*> variable;
	std::vector<ComponentNode*> components;

	void insertComponentNode(VariableNode<std::nullptr_t>* variableNode);
	void insertVariableNode(ComponentNode* componentNode);

	template<typename T>
	T getVariable(std::string variableName);
};