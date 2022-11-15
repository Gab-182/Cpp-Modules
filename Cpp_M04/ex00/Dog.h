/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:51:06 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:51:07 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

/*===============================================================================*/
#include "Animal.h"

/*===============================================================================*/
class Dog : public Animal {
	public:
	// Constructors && Destructor:
		Dog();
		Dog(const Dog &copy);
		~Dog();
	// Operators overloading:
		Dog &operator=(const Dog &dog);
	// Getters:
		std::string getType() const;
	// Methods:
		void makeSound() const;
};

/*===============================================================================*/
#endif //DOG_H
