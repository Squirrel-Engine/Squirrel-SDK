#include <gtest/gtest.h>


#include "../../SquirrelSDK/include/ActorNode.h"


class UT_ActorNode : public ::testing::Test
{
protected:
	ActorNode* actorNode;
	UT_ActorNode()
	{
		actorNode = new ActorNode();
	}
	
	void SetUp() {

	}
};


TEST_F(UT_ActorNode, getVariableInt)
{
	VariableNode<int>* var = new VariableNode<int>;
	var->variableNames = "VariableTest";
	var->variable = 2;
	actorNode->variables.push_back(var);
	ASSERT_EQ(actorNode->getVariable<int>("VariableTest"), 2);
}

TEST_F(UT_ActorNode, getVariableFloat)
{
	VariableNode<float>* var = new VariableNode<float>;
	var->variableNames = "VariableTest";
	var->variable = 2.1f;
	actorNode->variables.push_back(var);
	ASSERT_EQ(actorNode->getVariable<float>("VariableTest"), 2.1f);
}

TEST_F(UT_ActorNode, getVariableString)
{
	VariableNode<std::string>* var = new VariableNode<std::string>;
	var->variableNames = "VariableTest";
	var->variable = "FatihVar";
	actorNode->variables.push_back(var);
	ASSERT_EQ(actorNode->getVariable<std::string>("VariableTest"), "FatihVar");
}

TEST_F(UT_ActorNode, getVariableDouble)
{
	VariableNode<double>* var = new VariableNode<double>;
	var->variableNames = "VariableTest";
	var->variable = 2.2;
	actorNode->variables.push_back(var);
	ASSERT_EQ(actorNode->getVariable<double>("VariableTest"), 2.2);
}

TEST_F(UT_ActorNode, getVariableChar)
{
	VariableNode<char>* var = new VariableNode<char>;
	var->variableNames = "VariableTest";
	var->variable = 'F';
	actorNode->variables.push_back(var);
	ASSERT_EQ(actorNode->getVariable<char>("VariableTest"), 'F');
}



TEST_F(UT_ActorNode, insertComponentNode)
{
	ComponentNode* componentNode = new ComponentNode();
	componentNode->componentName = "MelisaComponent";
	actorNode->insertComponentNode(componentNode);
	ASSERT_EQ(actorNode->components.at(0)->componentName, "MelisaComponent");
}

TEST_F(UT_ActorNode, insertVariableNode)
{
	VariableNode<float>* var = new VariableNode<float>;
	var->variable = 2.5;
	actorNode->insertVariableNode(var);
	ASSERT_EQ(static_cast<VariableNode<float>*>(actorNode->variables.at(0))->variable, 2.5);

}