"use strict";

var Movie = function (title, priceCode) {
    this.title = title;
    this.priceCode = priceCode;
};

Movie.prototype.getTitle = function() {
    return this.title;
};

Movie.prototype.getPriceCode = function() {
    return this.priceCode;
};

Movie.prototype.setPriceCode = function(priceCode) {
    this.priceCode = priceCode;
};

Movie.CHILDREN = 2;
Movie.REGULAR = 0;
Movie.NEW_RELEASE = 1;
