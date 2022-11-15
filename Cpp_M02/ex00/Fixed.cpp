/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:45:58 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:59 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

/*====================[ Constructors && Destructors ]=========================*/
Fixed::Fixed() {
	std::cout
	<< BOLDGREEN
	<<"Default constructor called"
	<< RESET
	<< std::endl;

	this->fixedPointNumber = 0;
}

Fixed::~Fixed() {
	std::cout
	<< BOLDRED
	<<"Destructor called"
	<< RESET
	<< std::endl;
}

/*========================[ Copy Constructor]=================================*/
Fixed::Fixed(const Fixed &src) {
	std::cout
	<< BOLDCYAN
	<<"Copy constructor called"
	<< RESET
	<< std::endl;
	// Copy the data members of [src] to the data members of [this]
	*this = src;
}

/*============================[Operator]======================================*/
Fixed &Fixed::operator=(const Fixed &rhs) {
// Checking the address of the left and right objects if they match,
// so we don't copy the same object to itself.
 std::cout << "Copy assignation operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	else {
//		this->fixedPointNumber = rhs.fixedPointNumber;
		this->fixedPointNumber = rhs.getRawBits();
	}
	return (*this);
}

/*=======================[Getters && Setters]=================================*/
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointNumber);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointNumber = raw;
}

/*============================================================================*/