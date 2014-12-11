/*
 * Movie.h
 *
 *  Created on: Dec 11, 2014
 *      Author: sgluter
 */

#ifndef MOVIE_H_
#define MOVIE_H_

#include <string>
class Movie {
public:

	Movie(std::string title, int priceCode);
	virtual ~Movie();

	int getPriceCode();
	void setPriceCode(int code);
	std::string getTitle();

public:
	static const int CHILDRENS = 2;
	static const int REGULAR = 0;
	static const int NEW_RELEASE = 1;

private:
	std::string title;
	int priceCode;


};

#endif /* MOVIE_H_ */
