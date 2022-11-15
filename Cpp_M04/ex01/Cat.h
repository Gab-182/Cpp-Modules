/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:53:38 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:53:39 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H
/*===============================================================================*/
#include "Animal.h"
#include "Brain.h"

/*===============================================================================*/
class Cat : public Animal {
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &copy);
		~Cat();
		Cat &operator=(const Cat &cat);
		std::string getType() const;
		Brain *getBrain() const;
		void makeSound() const;
};

/*===============================================================================*/
#endif //CAT_H
