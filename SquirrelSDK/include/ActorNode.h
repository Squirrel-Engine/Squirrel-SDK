#pragma once
#include <string>
#include <vector>


#include "ComponentNode.h"
#include "VariableNode.h"


class ActorNode{
public:
	ActorNode() = default;
	std::vector<IVariable*> variables;
	std::vector<ComponentNode*> components;

	void insertComponentNode(ComponentNode* componentNode);
	void insertVariableNode(IVariable* variable);

	template<typename T>
	T getVariable(std::string variableName);
};

template <typename T>
T ActorNode::getVariable(std::string variableName)
{
	for (auto element : variables)
	{
		if (static_cast<VariableNode<T>*>(element)->variableNames == variableName)
		{
			return static_cast<VariableNode<T>*>(element)->variable;
		}

	}
}
