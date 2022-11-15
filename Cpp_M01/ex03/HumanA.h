/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:44:07 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:44:08 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

/*=====================================================================*/
#include "Weapon.h"

/*=====================================================================*/
class HumanA {
private:
	// Attributes:
	std::string	m_name;
	Weapon		&m_weapon;

public:
	// Constructors && Destructors:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	//Methods:
	std::string&	getName();
	void			setName(std::string name);

	Weapon 		getWeapon();
	void		setWeapon(Weapon& weapon);

	void			attack();
};

/*=====================================================================*/
#endif //HUMANA_H
