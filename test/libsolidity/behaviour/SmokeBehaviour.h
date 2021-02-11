/*
	This file is part of solidity.
	solidity is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.
	solidity is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.
	You should have received a copy of the GNU General Public License
	along with solidity.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <iostream>
#include <test/libsolidity/Behaviour.h>

namespace solidity::frontend::test
{

class SmokeBehaviour: public Behaviour
{
public:
	SmokeBehaviour() = default;
	~SmokeBehaviour() override = default;

	void before(TestFunctionCall const& _call, bool _artificial) override;
	bool after(TestFunctionCall const& _call, bool _artificial) override;
	void generateExpectation(TestFunctionCall const&, std::ostream&) override;
	bool isIncomplete(const TestFunctionCall& call) override;
};

} // namespace  solidity::frontend::test
