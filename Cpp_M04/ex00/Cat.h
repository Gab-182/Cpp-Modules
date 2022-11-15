/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:50:46 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:50:47 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
/*===============================================================================*/
#include "Animal.h"

/*===============================================================================*/
class Cat : public Animal {
	public:
	// Constructors && Destructor:
		Cat();
		Cat(const Cat &copy);
		~Cat();
	// Operators overloading:
		Cat &operator=(const Cat &cat);
	// Getters:
		std::string getType() const;
	// Methods:
		void makeSound() const;
};

/*===============================================================================*/
#endif //CAT_H
