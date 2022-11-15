/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:51:22 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:51:23 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"
/*===============================================================================*/
class WrongCat : public WrongAnimal {
	public:
		// Constructors && Destructor:
		WrongCat();
		WrongCat(const WrongCat &copy);
		~WrongCat();
		// Operators overloading:
		WrongCat &operator=(const WrongCat &cat);
		// Getters:
		std::string getType() const;
		// Methods:
		void makeSound() const;
};

/*===============================================================================*/

#endif //WRONGCAT_H
