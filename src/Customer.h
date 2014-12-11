/*
 * Customer.h
 *
 *  Created on: Dec 11, 2014
 *      Author: sgluter
 */

#ifndef CUSTOMER_H_
#define CUSTOMER_H_

#include <string>
#include <vector>
#include "Rental.h"

class Customer {
public:
	Customer(std::string name);
	virtual ~Customer();

	void addRental(Rental rental);

	std::string getName();

	std::string statment();

private:
	std::string name;
	std::vector<Rental> rentals;

};

#endif /* CUSTOMER_H_ */
