"use strict";

var Rental = function (movie, daysRented) {
    this.movie = movie;
    this.daysRented = daysRented;
};

Rental.prototype.getMovie = function () {
    return this.movie;
};

Rental.prototype.getDaysRented = function () {
    return this.daysRented;
};