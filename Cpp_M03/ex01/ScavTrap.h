/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:48:31 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:48:32 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

/*============================================================================*/
#include "ClapTrap.h"

/*============================================================================*/
class ScavTrap : public ClapTrap {
	public:
	// Constructors && Destructor:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &scav);
		~ScavTrap();
	// Operator overloads:
		ScavTrap &operator=(const ScavTrap &scav);
	// Methods:
		void guardGate();
		void beRepaired(unsigned int amount);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
};

/*============================================================================*/
#endif //SCAVTRAP_H
