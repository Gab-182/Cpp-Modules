/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:40:38 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:40:39 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#define BOLDGREEN   "\033[1m\033[31m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define RESET		"\033[0m"			   /* Reset the color */

int main() {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "======================================================================" << std::endl;

	std::cout << BOLDYELLOW << "The memory address of the string variable." << std::endl;
	std::cout << BOLDGREEN << &str << std::endl;

	std::cout << BOLDYELLOW << "[The memory address held by stringPTR]" << std::endl;
	std::cout << BOLDGREEN << stringPTR << std::endl;

	std::cout << BOLDYELLOW << "[The memory address of the string variable.]" << std::endl;
	std::cout << BOLDGREEN << &stringREF << RESET << std::endl;

	std::cout << "======================================================================" << std::endl;

	std::cout << BOLDYELLOW << "[The value of the string variable.]" << std::endl;
	std::cout << BOLDGREEN << str << std::endl;

	std::cout << BOLDYELLOW << "[The value pointed to by stringPTR]" << std::endl;
	std::cout << BOLDGREEN << *stringPTR << std::endl;

	std::cout << BOLDYELLOW << "[The value pointed to by stringREF.]" << std::endl;
	std::cout << BOLDGREEN << stringREF << RESET << std::endl;

	std::cout << "======================================================================" << std::endl;

	return (0);
}
