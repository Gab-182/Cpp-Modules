#include "Conversion.h"

/*===============================================================================*/
/**
 * @brief Trim the spaces from the front and back of the string
 * 
 * @param arg 
 * @return char* 
 */
char* removeSpace(char *arg) {
	int i = 0;
	int j = 0;

	char* newArg = new char[strlen(arg) + 1];

	while (arg[i]) {
		if (arg[i] != ' ') {
			newArg[j] = arg[i];
			j++;
		}
		i++;
	}
	newArg[j] = '\0';
	return (newArg);
}

/*===============================================================================*/
int main(int argc, char **argv) {
	if (argc == 2) {
		char *input;

		input = removeSpace(argv[1]);
		Conversion newProgram;
		newProgram.convert(input);
		delete input;
		return (0);
	}
	else {
		std::cout << BOLDRED << "Usage: ./convert [value]" << RESET << std::endl;
	}
		return 0;
}

/*===============================================================================*/