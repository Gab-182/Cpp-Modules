/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:02 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 17:35:58 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.h"


/*=======================================================================*/
//Constructor:
Contact::Contact() {};
//Destructor:
Contact::~Contact() {}

/*===========================[ Getters ]=================================*/

const std::string &Contact::getFirstName() const {
	return FirstName;
}

const std::string &Contact::getLastName() const {
	return LastName;
}

const std::string &Contact::getNickname() const {
	return Nickname;
}

const std::string &Contact::getPhoneNumber() const {
	return PhoneNumber;
}

const std::string &Contact::getDarkestSecret() const {
	return DarkestSecret;
}

/*===========================[ Setters ]=================================*/
void Contact::setFirstName(const std::string firstName) {
	FirstName = firstName;
}

void Contact::setLastName(const std::string lastName) {
	LastName = lastName;
}

void Contact::setNickname(const std::string nickname) {
	Nickname = nickname;
}

void Contact::setPhoneNumber(const std::string phoneNumber) {
	PhoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(const std::string darkestSecret) {
	DarkestSecret = darkestSecret;
}

/*=======================================================================*/