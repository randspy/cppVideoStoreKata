//============================================================================
// Name        : cppVideoStore.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "QUnit.hpp";

using namespace std;

int main() {
	QUnit::UnitTest qunit(std::cerr, QUnit::normal);

	QUNIT_IS_EQUAL(42, 42);

	return qunit.errors();
}
