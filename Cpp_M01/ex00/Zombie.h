/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:37:19 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:37:20 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

/*=====================================================================*/
#define RESET   "\033[0m"
#define BLACK   "\033[30m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"
#define BOLDMAGENTA "\033[1m\033[35m"
#define BOLDCYAN    "\033[1m\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"
#define RESET		"\033[0m"
#define BOLDBLACK   "\033[1m\033[30m"
#define BOLDRED     "\033[1m\033[31m"
#define BOLDGREEN   "\033[1m\033[32m"
#define BOLDYELLOW  "\033[1m\033[33m"
#define BOLDBLUE    "\033[1m\033[34m"

/*=====================================================================*/
# include <iostream>
# include <string>
# include <cstdlib>

/*=====================================================================*/
class Zombie {
	private:
	// Attributes:
		std::string	Name;

	public:
	// Constructors && Destructors:
		Zombie();
		Zombie(std::string name);
		~Zombie();
	// Setters && Getters:
		std::string getName();
		void setName(std::string name);
	// Methods:
		void announce(void);
};
/*=======================================================================*/
Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif //ZOMBIE_H
