/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:28 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 20:11:29 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

/*========================================================================*/
PhoneBook::PhoneBook() {
	this->index = 0;
}

PhoneBook::~PhoneBook() {}

/*========================================================================*/
void PhoneBook::addContact() {
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;	
	int			i;

	i = this->index;
	if (i > 7)
		i = this->index % 8;
	// Taking input from the user:
	std::cout << "Enter contact's first name: " << std::endl;
	std::cin >> firstName;
	std::cout << "Enter contact's last name: " << std::endl;
	std::cin >> lastName;
	std::cout << "Enter contact's nick name: " << std::endl;
	std::cin >> nickName;
	std::cout << "Enter contact's phone number: " << std::endl;
	std::cin >> phoneNumber;
	std::cout << "Enter contact's darkest secret: " << std::endl;
	std::cin >> darkestSecret;
	//Setting the contact values in a specific index of the array.
	PhoneBook::contact[i].setFirstName(firstName);
	PhoneBook::contact[i].setLastName(lastName);
	PhoneBook::contact[i].setNickname(nickName);
	PhoneBook::contact[i].setPhoneNumber(phoneNumber);
	PhoneBook::contact[i].setDarkestSecret(darkestSecret);
	this->index++;
}

/*========================================================================*/
/**
 * printing the header of the contact table.
 **/
void PhoneBook::printHeader() {
	std::cout
	<< "+----------+----------+----------+----------+" << std::endl
	<< "|" << std::setfill(' ') << std::setw(10) << "Index"
	<< "|" << std::setfill(' ') << std::setw(10) << "First name"
	<< "|" << std::setfill(' ') << std::setw(10) << "Last name"
	<< "|" << std::setfill(' ') << std::setw(10) << "Nick name" << "|" << std::endl
	<< "+----------+----------+----------+----------+" << std::endl;
}

/*========================================================================*/
/**
 * Setting the width of the contact's fields in the table.
 **/
std::string PhoneBook::setContactWidth(std::string field) {
	if (field.length() > 10) {
		field = field.substr(0, 9);
		field.append(".");
	}
	return (field);
}

/*========================================================================*/
/**
 * printing the contact in each field of the table.
 **/
void PhoneBook::printContact(int index) {
	std::cout
	<< "|" << std::setfill(' ') << std::setw(10) << (index+1) << "|"
	<< std::setfill(' ') << std::setw(10) << setContactWidth(PhoneBook::contact[index].getFirstName()) << "|"
	<< std::setfill(' ') << std::setw(10) << setContactWidth(PhoneBook::contact[index].getLastName()) << "|"
	<<  std::setfill(' ') << std::setw(10)<< setContactWidth(PhoneBook::contact[index].getNickname()) << "|" << std::endl;
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

/*========================================================================*/
void PhoneBook::printContactInfo(int index) {
	std::cout << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "First name:<-------->" << PhoneBook::contact[index-1].getFirstName() << std::endl;
	std::cout << "Last name:<--------->" << PhoneBook::contact[index-1].getLastName() << std::endl;
	std::cout << "Nick name:<--------->" << PhoneBook::contact[index-1].getNickname() << std::endl;
	std::cout << "Phone number:<------>" << PhoneBook::contact[index-1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret:<---->" << PhoneBook::contact[index-1].getDarkestSecret() << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << std::endl;
	std::cin.clear();
}

/*========================================================================*/
/* SEARCH: display a specific contact
 * Each column must be 10 characters wide. A pipe character (’|’) separates
 * them. The text must be right-aligned. If the text is longer than the column,
 * it must be truncated and the last displayable character must be replaced by a
 * dot (’.’).
 */
void PhoneBook::searchContact() {
	int			index;
	std::string	input;

	index = 0;
	std::cout << std::endl;

	// Check if the phone book is empty:
	if (this->index < 1) {
		std::cout << "Phone book is Empty" << std::endl;
		std::cout << std::endl;
		std::cin.clear();
		return;
	}
	// print the header:
	PhoneBook::printHeader();
	// print the contacts:
	while (index < this->index) {
		if (index == 8)
			break;
		PhoneBook::printContact(index);
		index++;
	}
	// Check if the chosen index exist:
	std::cout << std::endl;
	std::cout << "Enter the index of the contact you want to display: " << std::endl;
	std::getline(std::cin, input);
	//Check if we input just integers:
	for (int i = 0; i < input.length(); i++) {
		if (!(std::isdigit(input[i]))) {
			std::cout << "Invalid index" << std::endl;
			std::cin.clear();
			return;
		}
	}
	index = atoi(input.c_str());
	if (index > this->index || index < 1) {
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	// Display the contact info:
	PhoneBook::printContactInfo(index);
}

/*========================================================================*/