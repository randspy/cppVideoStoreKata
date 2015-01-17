#include "Rental.h"

Rental::Rental(const Movie movie, int daysRented)
: movie(movie), daysRented(daysRented) {
}

Rental::~Rental() {
}

int Rental::getDaysRented(){
	return daysRented;
}

Movie Rental::getMovie(){
	return movie;
}
