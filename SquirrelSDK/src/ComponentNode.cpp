#include "ComponentNode.h"

ComponentNode::ComponentNode()
{
}

void ComponentNode::insertVariableNode(IVariable* variable)
{
	variables.push_back(variable);
}
