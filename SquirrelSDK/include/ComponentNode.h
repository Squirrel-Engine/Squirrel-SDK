#pragma once
#include <string>
#include <vector>

#include "IVariable.h"
#include "VariableNode.h"

class ComponentNode
{
public:
	ComponentNode();
	std::vector<IVariable*> variables;
	std::string componentName;
	void insertVariableNode(IVariable* variable);

	template<typename T>
	T getVariable(std::string variableName);
};

template <typename T>
T ComponentNode::getVariable(std::string variableName)
{
	for (auto element : variables)
	{
		if (static_cast<VariableNode<T>*>(element)->variableNames == variableName)
		{
			return static_cast<VariableNode<T>*>(element)->variable;
		}

	}
}