/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:13 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 20:15:22 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

void printChoices() {
	std::cout << "> 1. Add new contact.  ------>[ADD]\n"
				 "> 2. Search for a contact. -->[SEARCH]\n"
				 "> 3. Exit the program. ------>[EXIT]\n" 
				 "> 4. Print choices again ---->[1]"
				 << std::endl;
	std::cout << std::endl;
}
/*=======================================================================*/
int	main(int argc, char **argv) {
	(void)argv;
	std::string		choice;

	if (argc == 1) {
		PhoneBook		phoneBook;

		std::cout << "\nWelcome stranger\n" << std::endl;
		std::cout << "What do you want to do?" << std::endl;
		std::cout << std::endl;
		printChoices();
		while (true) {
			std::cout << "> ";
			std::getline(std::cin, choice);
			if (choice == "EXIT" || std::cin.eof())
				break;
			else if (choice == "ADD") {
				phoneBook.addContact();
				std::cout << "*************** [Contact has been added] ***************" << std::endl;
			} 
			else if (choice == "SEARCH")
				phoneBook.searchContact();
			else if (choice == "1")
				printChoices();
			std::cin.clear();
			
		}
	}
	else
		std::cout << "Invalid number of arguments" << std::endl;
	return (0);
}
/*=======================================================================*/