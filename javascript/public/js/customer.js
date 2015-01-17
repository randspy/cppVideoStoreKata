"use strict";

var Customer = function (name) {
    this.name = name;
    this.rentals = [];
};

Customer.prototype.addRental = function (rental) {
    this.rentals.push(rental);
};

Customer.prototype.getName = function () {
    return this.name;
};

Customer.prototype.statement = function () {
    var totalAmount = 0;
    var frequentRentalPoints = 0;
    var result = "Rental Record for " + this.getName() + "\n";

    for (var i = 0; i < this.rentals.length; i++) {
        var thisAmount = 0;
        var rental =  this.rentals[i];

        switch (rental.getMovie().getPriceCode()) {
            case Movie.REGULAR:
                thisAmount += 2;
                if (rental.getDaysRented() > 2) {
                    thisAmount += (rental.getDaysRented() - 2) * 1.5;
                }
                break;
            case Movie.NEW_RELEASE:
                thisAmount += rental.getDaysRented() * 3;
                break;
            case Movie.CHILDREN:
                thisAmount += 1.5;
                if (rental.getDaysRented() > 3) {
                    thisAmount += (rental.getDaysRented() - 3) * 1.5;
                }
                break;
        }

        frequentRentalPoints++;
        if (rental.getMovie().getPriceCode() == Movie.NEW_RELEASE && rental.getDaysRented() > 1){
            frequentRentalPoints++;
        }

        result += "\t" + rental.getMovie ().getTitle () + "\t" + thisAmount.toFixed(1) + "\n";
        totalAmount += thisAmount;
    }
    result += "You owed " + totalAmount.toFixed(1) + "\n";
    result += "You earned " + frequentRentalPoints + " frequent renter points\n";
    return result;
};