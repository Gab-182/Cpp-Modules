/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:36:07 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 19:44:18 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

/*=======================================================================================*/
# include <iostream>
# include <iomanip>
# include <string>
# include <cstdlib>

/*===============================[  Contact Class  ]===================================*/
class Contact {
private:
	//Attributes:
	std::string FirstName;
	std::string LastName;
	std::string Nickname;
	std::string PhoneNumber;
	std::string DarkestSecret;

public:
	// Constructors:
	Contact();
	// Destructor:
	~Contact();

	//Getters:
	const std::string &getFirstName() const;
	const std::string &getLastName() const;
	const std::string &getNickname() const;
	const std::string &getPhoneNumber() const;
	const std::string &getDarkestSecret() const;

	//Setters:
	void setFirstName(const std::string firstName);
	void setLastName(const std::string lastName);
	void setNickname(const std::string nickname);
	void setPhoneNumber(const std::string phoneNumber);
	void setDarkestSecret(const std::string darkestSecret);
};

/*=======================================================================================*/

#endif //CONTACT_H
