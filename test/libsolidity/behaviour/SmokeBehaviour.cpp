//
// Created by Alexander Arlt on 09.02.21.
//

#include "SmokeBehaviour.h"

#include <test/libsolidity/util/TestFunctionCall.h>

namespace solidity::frontend::test
{

void SmokeBehaviour::before(TestFunctionCall const& _call, bool _artificial)
{
	(void) _artificial;
	std::cout << "[before] " << &_call << ": " << _call.call().signature << std::endl;
}

bool SmokeBehaviour::after(TestFunctionCall const& _call, bool _artificial)
{
	(void) _artificial;
	std::cout << "[after]  " << &_call << ": " << _call.call().signature << std::endl;
	return true;
}

void SmokeBehaviour::generateExpectation(TestFunctionCall const&, std::ostream&) {}

bool SmokeBehaviour::isIncomplete(const TestFunctionCall& call)
{
	(void) call;
	return false;
}

} // namespace solidity::frontend::test
