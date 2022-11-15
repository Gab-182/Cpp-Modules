/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:47:02 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:47:03 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

/*===============================================================================*/
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include <cmath>

/*============================================================================*/
// since [fractionalBits] attribute is static, it is shared by all objects
// of the class
class Fixed {
	private:
	// Attributes:
		int					intPart;
		static const int	fractionalBits = 8;

	public:
	// Constructors && Destructors:
		Fixed();
		Fixed(const int intNumber);
		Fixed(const float floatNumber);
		~Fixed();
	// Copy Constructor:
		Fixed( const Fixed& src);
	// Operator overloading:
		Fixed &operator=(const Fixed &rhs);
	// Arithmetic Operator overloading:
		Fixed operator+(const Fixed &rhs);
		Fixed operator-(const Fixed &rhs);
		Fixed operator*(const Fixed &rhs);
		Fixed operator/(const Fixed &rhs);
	// Increment && Decrement operators:
		Fixed operator++(int);
		Fixed operator--(int);
	// PreIncrement && PreDecrement operators:
		Fixed operator++();
		Fixed operator--();
	//comparison operators:
		bool operator<(const Fixed &rhs) const;
		bool operator>(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;
	// Getters && Setters:
		int getRawBits(void) const;
		void setRawBits( int const raw );
		void setRawBits(const float raw);
	//Methods:
		float	toFloat( void ) const;
		int 	toInt( void ) const;
	// Overloaded methods:
		static Fixed min(Fixed &fixed1, Fixed &fixed2);
		static Fixed max(Fixed &fixed1, Fixed &fixed2);
		static Fixed min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed max(Fixed const &fixed1, Fixed const &fixed2);
};

/*
 * Overloading the << operator:
 * -----------------------------
 * Why these operators must be overloaded as global?
 * In operator overloading, if an operator is overloaded as a member,
 * then it must be a member of the object on the [left side of the operator].
 * and since [<<] is a member of [ostream] class, then it must be overloaded
 * as a global in [Fixed] class.
 */
std::ostream &operator<<(std::ostream &lhs, Fixed const &rhs);
/*============================================================================*/
#endif //FIXED_H
