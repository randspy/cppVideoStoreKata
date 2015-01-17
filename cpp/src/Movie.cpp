#include "Movie.h"

Movie::Movie(std::string title, int priceCode) {
	this->title = title;
	this->priceCode = priceCode;
}

Movie::~Movie() {}


int Movie::getPriceCode(){
	return priceCode;
}

void Movie::setPriceCode(int code)
{
	this->priceCode = code;
}

std::string Movie::getTitle(){
	return title;
}
