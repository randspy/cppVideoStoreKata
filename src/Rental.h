/*
 * Rental.h
 *
 *  Created on: Dec 11, 2014
 *      Author: sgluter
 */

#ifndef RENTAL_H_
#define RENTAL_H_

#include "Movie.h"

class Rental {
public:
	Rental(const Movie movie, int daysRented);
	virtual ~Rental();

	int getDaysRented();
	Movie getMovie();

private:
	Movie movie;
	int daysRented;
};

#endif /* RENTAL_H_ */
