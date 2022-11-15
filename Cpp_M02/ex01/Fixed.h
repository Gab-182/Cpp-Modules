/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:46:27 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:46:33 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
#define FIXED_H

/*===============================================================================*/
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define RESET		"\033[0m"			   /* Reset the color */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */

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
	// Getters && Setters:
		int getRawBits(void) const;
		void setRawBits( int const raw );
		void setRawBits(const float raw);
	//Methods:
		float toFloat( void ) const;
		int toInt( void ) const;

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
