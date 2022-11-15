/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:48:15 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:48:16 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

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
# include <string>
# include <cstdlib>

/*============================================================================*/
class ClapTrap {
	protected: // Change it to protected to be able to access it from the child class
		std::string	name;
		unsigned int hitPoints;
		unsigned int energyPoints;
		unsigned int attackDamage;

	public:
	// Constructors && Destructor:
		ClapTrap();
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &clap);
		~ClapTrap();
	// Operator overloads:
		ClapTrap &operator=(const ClapTrap &other);
	// Getters:
		unsigned int getHitPoints() const;
		const std::string &getName() const;
		unsigned int getEnergyPoints() const;

	 // Methods:
	 	virtual void beRepaired(unsigned int amount);
		virtual void attack(const std::string& target);
		virtual void takeDamage(unsigned int amount);

};

/*============================================================================*/
#endif //CLAPTRAP_H
