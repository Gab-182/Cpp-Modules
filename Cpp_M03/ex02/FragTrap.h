/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:06 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:50:07 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
#define FRAGTRAP_H
/*===============================================================================*/
#include "ClapTrap.h"

/*===============================================================================*/
class FragTrap : public ClapTrap {
	public:
	// Constructors && Destructor:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &frag);
		~FragTrap();
	// Operator overloads:
		FragTrap &operator=(const FragTrap &other);

	// Methods:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void highFivesGuys();
};

/*===============================================================================*/

#endif //FRAGTRAP_H
