/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:54:50 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:54:51 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

/*===============================================================================*/
#include "Animal.h"
#include "Brain.h"

/*===============================================================================*/
class Dog : public Animal {
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &copy);
		~Dog();
		Dog &operator=(const Dog &dog);
		std::string getType() const;
		Brain *getBrain() const;
		void makeSound() const;
};
/*===============================================================================*/
#endif //DOG_H
