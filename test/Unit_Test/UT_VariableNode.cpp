#include <gtest/gtest.h>

#include "../../SquirrelSDK/include/VariableNode.h"


class UT_VariableNode : public ::testing::Test
{
protected:
	

	UT_VariableNode()
	{
		//VariableNode<int>* var = new VariableNode<int>;
		//strVariableNode = new VariableNode<std::string>;
	}

	void SetUp() {

	}

	VariableNode<int>* intVariableNode = new VariableNode<int>;
	VariableNode<std::string>* strVariableNode = new VariableNode<std::string>;

};

/// <summary>
/// 
/// </summary>
TEST_F(UT_VariableNode, setVariable)
{
	intVariableNode->setVariable(5);
	ASSERT_EQ(intVariableNode->variable, 5);


	strVariableNode->setVariable("We love Melisa!");
	ASSERT_EQ(strVariableNode->variable, "We love Melisa!");
}

/// <summary>
/// 
/// </summary>
TEST_F(UT_VariableNode, getVariable)
{

	intVariableNode->setVariable(5);
	ASSERT_EQ(intVariableNode->getVariable(), 5);


	strVariableNode->setVariable("We love Melisa!");
	ASSERT_EQ(strVariableNode->getVariable(), "We love Melisa!");
}




/*
 *
 *
 *
 *
 */
