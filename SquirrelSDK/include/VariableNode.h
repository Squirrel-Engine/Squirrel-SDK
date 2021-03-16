#pragma once
#include <string>

#include "EVariableType.h"
#include "IVariable.h"


//				   Sinsirella 
//__________**___________________**__________\\
//_____________________^^____________________\\
//___________________------__________________\\





/// <summary>
/// VariableNode object is generic data container.
/// </summary>
/// <typeparam name="Template"></typeparam>
/// 
template<typename T>
class VariableNode : public IVariable
{
public:
	EVariableType variableType;
	std::string variableNames;
	T variable;


	void setVariable(T var);

	
	T getVariable();
};


template <typename T>
void VariableNode<T>::setVariable(T var)
{
	variable = var;
}

template <typename T>
T VariableNode<T>::getVariable()
{
	return variable;
}


