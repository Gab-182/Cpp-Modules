/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:35 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 19:58:58 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

/*=======================================================================================*/
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>
# include "Contact.h"

/*===============================[  PhoneBook Class  ]===================================*/
class PhoneBook {
private:
	//Attributes:
	Contact contact[8];
	int		index;

private:
	// Utils Methods:
	void printHeader();
	void printContact(int index);
	void printContactInfo(int index);
	std::string setContactWidth(std::string field);
public:
	// Constructor:
	PhoneBook();
	// Destructor:
	~PhoneBook();

	// Basic Methods:
	void	addContact();
	void	searchContact();
};
/*=======================================================================================*/

#endif