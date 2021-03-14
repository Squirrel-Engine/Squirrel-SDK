#pragma once
#include <string>

#include "EVariableType.h"
#include "IVariable.h"
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