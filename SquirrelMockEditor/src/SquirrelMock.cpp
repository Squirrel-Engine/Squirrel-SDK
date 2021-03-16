// SquirrelSDK.cpp : Defines the entry point for the application.
//

#include "SquirrelMock.h"

using namespace std;

int main()
{
	cout << "Hello Mock Editor" << endl;
	ActorNode* actor = new ActorNode();
	VariableNode<int>* var = new VariableNode<int>;
	var->variable = 2;
	actor->variable.push_back(var);
	std::cout << static_cast<VariableNode<int>*>(actor->variable.at(0))->variable;

	VariableNode<std::string>* varStr = new VariableNode<std::string>;
	varStr->variable = "Fatih and Melisa";

	
	varStr->setVariable("sffd");
	actor->variable.push_back(varStr);
	std::cout << static_cast<VariableNode<std::string>*>(actor->variable.at(1))->variable;

	return 0;
}
