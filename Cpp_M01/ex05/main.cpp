/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:45:29 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:30 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

/*============================================================================*/
int main() {
	Harl harl;
	harl.complain("debug");
	harl.complain("DEBUG");
	harl.complain("unknown");
	harl.complain("info");
	harl.complain("INfo");
	harl.complain("unknown");
	harl.complain("warning");
	harl.complain("unknown");
	harl.complain("error");
	return 0;
}

/*============================================================================*/