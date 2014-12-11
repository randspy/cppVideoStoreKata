/*
 * Customer.cpp
 *
 *  Created on: Dec 11, 2014
 *      Author: sgluter
 */

#include "Customer.h"
#include <sstream>
#include <iomanip>

Customer::Customer(std::string name) {
	this->name = name;
}

Customer::~Customer() {
}

void Customer::addRental(Rental rental){
	rentals.push_back(rental);
}

std::string Customer::getName(){
	return name;
}

std::string Customer::statment()
{
    double              totalAmount             = 0;
	int                 frequentRenterPoints    = 0;
	std::vector<Rental>::iterator rentals = this->rentals.begin();
	std::string result = "Rental Record for " + getName () + "\n";

	while (rentals != this->rentals.end()) {
		double      thisAmount = 0;
		Rental      each = *rentals;


		// determines the amount for each line
		switch (each.getMovie ().getPriceCode ()) {
			case Movie::REGULAR:
				thisAmount += 2;
				if (each.getDaysRented () > 2)
					thisAmount += (each.getDaysRented () - 2) * 1.5;
				break;
			case Movie::NEW_RELEASE:
				thisAmount += each.getDaysRented () * 3;
				break;
			case Movie::CHILDRENS:
				thisAmount += 1.5;
				if (each.getDaysRented () > 3)
					thisAmount += (each.getDaysRented () - 3) * 1.5;
				break;
		}

		frequentRenterPoints++;

		if (each.getMovie ().getPriceCode () == Movie::NEW_RELEASE
				&& each.getDaysRented () > 1)
			frequentRenterPoints++;

		std::stringstream thisAmountstr;
		thisAmountstr <<  std::fixed << std::setprecision(1) << thisAmount;
		result += "\t" + each.getMovie ().getTitle () + "\t"
							+ thisAmountstr.str() + "\n";
		totalAmount += thisAmount;
		rentals++;
	}

	std::stringstream totalAmountStr;
	totalAmountStr <<  std::fixed << std::setprecision(1) << totalAmount;
	result += "You owed " + totalAmountStr.str() + "\n";

	std::stringstream frequentRenterPointsStr;
	frequentRenterPointsStr <<  std::fixed << std::setprecision(1) << frequentRenterPoints;
	result += "You earned " + frequentRenterPointsStr.str() + " frequent renter points\n";


	return result;
}
