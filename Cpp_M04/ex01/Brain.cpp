/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:52:19 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:52:20 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.h"

/*===============================================================================*/
Brain::Brain() {
	std::cout << BOLDGREEN << "[Default Brain constructor] called" << RESET << std::endl;
}
/*---------------------------------------------------*/
Brain::Brain(const Brain &copy) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}
/*---------------------------------------------------*/
Brain::~Brain() {
	std::cout << BOLDRED << "[Brain destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
Brain &Brain::operator=(const Brain &brain) {
	if (this != &brain) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
	}
	return (*this);
}
/*===============================================================================*/
std::string Brain::getIdea(int i) const {
	return (this->ideas[i]);
}

void Brain::setIdea(int i, std::string idea) {
	this->ideas[i] = idea;
}
/*===============================================================================*/