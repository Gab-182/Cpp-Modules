/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:46:23 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:46:24 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.h"

/*====================[ Constructors && Destructors ]=========================*/
// [Default] Constructor:
Fixed::Fixed() {
	std::cout
	<< BOLDGREEN
	<<"[Default] constructor called"
	<< RESET
	<< std::endl;

	this->intPart = 0;
}
/*--------------------------------------------------------------------*/
// [Int] Constructor:
Fixed::Fixed(const int intNumber) {
	std::cout
	<< GREEN
	<<"[Int] constructor called"
	<< RESET
	<< std::endl;

	this->setRawBits(intNumber);
}
/*--------------------------------------------------------------------*/
// [Float] Constructor:
Fixed::Fixed(const float floatNumber) {
	std::cout
	<< GREEN
	<<"[Float] constructor called"
	<< RESET
	<< std::endl;

	this->setRawBits(floatNumber);
}
/*--------------------------------------------------------------------*/
// Destructor:
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
	<<"[Copy] constructor called"
	<< RESET
	<< std::endl;

	// [Copy] the data members of [src] to the data members of [this]
	*this = src;
}

/*============================[Operator]======================================*/
/**
 * @brief [Copy] assignment operator
 * @param rhs [Fixed] object to be copied
 * @return [Fixed] reference to that class object
 **/
Fixed &Fixed::operator=(const Fixed &rhs) {
// Checking the address of the left and right objects if they match,
// so we don't copy the same object to itself.
 std::cout << "[Copy assignation] operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	else
		this->intPart = rhs.getRawBits();
	return (*this);
}

/*--------------------------------------------------------------------*/
/**
 * @brief [Operator] Overload the output operator
 * @param lhs (left_hand_side) [std::ostream] The output stream
 * @param rhs (right_hand_side) [Fixed] The object to be printed
 * @return [std::ostream] The output stream
 **/
std::ostream & operator<<(std::ostream &out, Fixed const &fixed) {
	out << fixed.toFloat();
	return (out);
}

/*=======================[Getters && Setters]=================================*/
/*
 * Note:
 * -------------------------------------
 * [const] at the end of the function:
 * -------------------------------------
 *  In practical terms it means that you ask the compiler to check that the member function does not
 *  change the object data in any way.
 *  It means asking the compiler to check that it doesn't directly change any member data,
 *  and it doesn't call any function that itself does not guarantee that it won't change the object.
 * */
int Fixed::getRawBits(void) const {
	std::cout << "[getRawBits] member function called" << std::endl;
	return (this->intPart);
}

/*--------------------------------------------------------------------*/
void Fixed::setRawBits(const int raw) {
	std::cout << "[setRawBits] member function called" << std::endl;
	this->intPart = raw << Fixed::fractionalBits;
}

/*--------------------------------------------------------------------*/
void Fixed::setRawBits(const float raw) {
	this->intPart = round(raw * (1 << Fixed::fractionalBits));
}

/*===========================[Methods]========================================*/
/**
 * @brief Converting fixed point number to the integer value.
 * @details shifting the bits for the value to the [right] by
 * the number of fractional bits [8] to get the integer part.
 * @return [int] The integer value
 **/
int Fixed::toInt(void) const {
	return (this->intPart >> Fixed::fractionalBits);
}

/*--------------------------------------------------------------------*/
// Converting fixed point number to the floating point value.
float Fixed::toFloat(void) const {
	float	floatVal;

	/*
	 * convert [int -> float] using [c++ way] (static_cast).
	 * */
	floatVal = static_cast<int>(this->intPart);
	return (floatVal / ( 1 << Fixed::fractionalBits));
}

/*============================================================================*/