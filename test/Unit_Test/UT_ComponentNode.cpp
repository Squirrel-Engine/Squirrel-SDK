#include <gtest/gtest.h>

#include "../../SquirrelSDK/include/ComponentNode.h"

class UT_ComponentNode : public ::testing::Test
{
protected:
	ComponentNode* componentNode;
	UT_ComponentNode()
	{
		componentNode = new ComponentNode();
	}

	void SetUp() {

	}
};



TEST_F(UT_ComponentNode, getVariableInt)
{
	VariableNode<int>* var = new VariableNode<int>;
	var->variableNames = "VariableTest";
	var->variable = 2;
	componentNode->variables.push_back(var);
	ASSERT_EQ(componentNode->getVariable<int>("VariableTest"), 2);
}

TEST_F(UT_ComponentNode, getVariableFloat)
{
	VariableNode<float>* var = new VariableNode<float>;
	var->variableNames = "VariableTest";
	var->variable = 2.1f;
	componentNode->variables.push_back(var);
	ASSERT_EQ(componentNode->getVariable<float>("VariableTest"), 2.1f);
}

TEST_F(UT_ComponentNode, getVariableString)
{
	VariableNode<std::string>* var = new VariableNode<std::string>;
	var->variableNames = "VariableTest";
	var->variable = "FatihVar";
	componentNode->variables.push_back(var);
	ASSERT_EQ(componentNode->getVariable<std::string>("VariableTest"), "FatihVar");
}

TEST_F(UT_ComponentNode, getVariableDouble)
{
	VariableNode<double>* var = new VariableNode<double>;
	var->variableNames = "VariableTest";
	var->variable = 2.2;
	componentNode->variables.push_back(var);
	ASSERT_EQ(componentNode->getVariable<double>("VariableTest"), 2.2);
}

TEST_F(UT_ComponentNode, getVariableChar)
{
	VariableNode<char>* var = new VariableNode<char>;
	var->variableNames = "VariableTest";
	var->variable = 'F';
	componentNode->variables.push_back(var);
	ASSERT_EQ(componentNode->getVariable<char>("VariableTest"), 'F');
}

TEST_F(UT_ComponentNode, insertVariableNode)
{
	VariableNode<float>* var = new VariableNode<float>;
	var->variable = 2.5;
	componentNode->insertVariableNode(var);
	ASSERT_EQ(static_cast<VariableNode<float>*>(componentNode->variables.at(0))->variable, 2.5);

}