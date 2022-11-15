/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:44:20 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:44:21 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

/*=====================================================================*/
#include "Weapon.h"

/*=====================================================================*/
class HumanB {
	private:
	//Attributes:
		std::string	name;
		Weapon		*weapon;

	public:
	//Constructors && Destructors:
		HumanB();
		HumanB(std::string name);
		~HumanB();
	/*--------------------------------------------*/
	//Getters && Setters:
		//m_name:
		std::string getName();
		void 		setName(std::string name);
	/*--------------------------------------------*/
	//m_weapon:
		Weapon*	getWeapon();
		void 	setWeapon(Weapon *weapon);
	/*--------------------------------------------*/
	//Methods:
	void			attack();
};

/*=====================================================================*/
#endif //HUMANB_H
