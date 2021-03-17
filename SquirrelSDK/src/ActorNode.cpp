#include "ActorNode.h"



void ActorNode::insertComponentNode(ComponentNode* componentNode)
{
	components.push_back(componentNode);
}

void ActorNode::insertVariableNode(IVariable* variable)
{
	variables.push_back(variable);
}

