/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabdoush <gabdoush@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:45:02 by gabdoush          #+#    #+#             */
/*   Updated: 2022/10/04 14:45:03 by gabdoush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "stringReplacer.h"

/*=====================================================================================*/
/*
 * [npos] is a static member constant value with the greatest possible value for an element of type size_t.
 * This value, when used as the value for a len (or sublen) parameter in string's member functions,
 * means "until the end of the string".
 * As a return value, it is usually used to indicate no matches.
 **/
void stringReplacer(std::string toSearch, std::string toFind, std::string replaceWith) {
	int index = 0;

	index = toSearch.find(toFind, index);
	while(index != std::string::npos) {
		toSearch.erase(index, toFind.length());
		toSearch.insert(index,replaceWith);
		index += toFind.length();
		index = toSearch.find(toFind, index + 1);
	}

	// Copy [toSearch] string to [output.txt] file.
	std::ofstream file("output.replace");
	file << toSearch;
	file.close();
}

/*=====================================================================================*/
std::string	copyFileToString(const char *fileName) {
	std::string fileToString;

	//taking file as input stream
	std::ifstream f(fileName);
	if(f) {
		std::ostringstream ss;
		// reading data
		ss << f.rdbuf();
		fileToString = ss.str();
	}
	return (fileToString);
}

/*=====================================================================================*/
int main(int argc, char **argv) {
	if (argc == 4) {
		std::string toSearch = copyFileToString(argv[1]);
		stringReplacer(toSearch, argv[2], argv[3]);
		std::cout
		<< BOLDGREEN << "[DONE]"
		<< BOLDCYAN << " You can check the changes in <output.replace>"
		<< std::endl;
	}
	else {
		std::cout << BOLDRED << "Wrong arguments !!!\n"
		<< BOLDGREEN
		<< "Usage: "
		<< BOLDYELLOW
		<< "./rlc <filename> <string to be replaced> <string to replace with>\n"
		<< std::endl;
		return (1);
	}
	return (0);
}

/*=====================================================================================*/