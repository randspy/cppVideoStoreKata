/*
 * CustomerTest.h
 *
 *  Created on: Dec 11, 2014
 *      Author: sgluter
 */

#ifndef CUSTOMERTEST_H_
#define CUSTOMERTEST_H_

#include "QUnit.hpp"

class CustomerTest {
public:

	QUnit::UnitTest qunit;

	CustomerTest(std::ostream & out, int verboseLevel = QUnit::verbose);
	virtual ~CustomerTest();

	int run();

private:
	 void testSingleNewReleaseStatement();
	 void testDualNewReleaseStatement();
	 void testSingleChildrensStatement();
	 void testMultipleRegularStatement();
};

#endif /* CUSTOMERTEST_H_ */
