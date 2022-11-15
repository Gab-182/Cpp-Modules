/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:54:22 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:54:23 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <string>
#include <iostream>
# include "Animal.h"
/*===============================================================================*/
class Brain {
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain &copy);
		~Brain();
		Brain &operator=(const Brain &brain);
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
};

/*===============================================================================*/
#endif //BRAIN_H
