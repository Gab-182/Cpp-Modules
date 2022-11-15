#include "Conversion.h"


/*=========================== [Constructors & Destructor] =====================*/
Conversion::Conversion() {
	//std::cout << BOLDYELLOW << "[Default constructor] called" << RESET << std::endl;
}

Conversion::~Conversion() {
	//std::cout << BOLDYELLOW << "[Default destructor] called" << RESET << std::endl;
}

Conversion::Conversion(const Conversion &copy) {
	//std::cout << BOLDYELLOW << "[Copy constructor] called" << RESET << std::endl;
	if (this != &copy) {
		*this = copy;
	}
}
/*=========================== [Operators] ======================================*/
Conversion &Conversion::operator=(const Conversion &other) {
	if (this != &other) {
		this->input = other.getInput();
	}
	return (*this);
}

const std::string &Conversion::getInput() const {
	return (input);
}
/*=========================== [char] =========================================*/
int Conversion::charChecker(char* input) {
	int i = 0;

	if (!strcmp(input, "0.0")) {
		std::cout  << BOLDWHITE << "char   : \'" << "Non displayable" << "\'" << std::endl;
		return (1);
	}
	while (input[i]) {
		if (!std::isdigit(input[i])) {
			std::cout  << BOLDWHITE << "char   : \'" << "Impossible" << "\'" << std::endl;
			return (0);
		}
		i++;
	}
	int numValue = std::atoi(input);
	if ( numValue >= 0 && numValue <= 127) {
		if (numValue == 127 || (numValue >= 0 && numValue < 32)) {
			std::cout << BOLDWHITE << "char   : \'" << "Non displayable" << "\'" << std::endl;
			return (0);
		}
	}
	else {
		std::cout << BOLDWHITE << "char   : \'" << "Impossible" << std::endl;
		return (0);
	}
	std::cout << BOLDWHITE << "char   : \'" << static_cast<char>(numValue) << "\'" << std::endl;
	return (1);
}
/*=========================== [Integer] =========================================*/
int Conversion::intChecker(char *input) {
	int i = 0;
	int numValue = std::atoi(input);

	if (!strcmp(input, "0.0")) {
		std::cout  << BOLDWHITE << "int    : \'" << "0" << "\'" << std::endl;
		return (1);
	}
	while (input[i]) {
		if (!std::isdigit(input[i])) {
			if (input[i] == '+' && input[i + 1] != '+' && !input[i - 1] && numValue != 0);
			else if (input[i] == '-' && input[i + 1] != '-' && !input[i - 1] && numValue != 0);
			else if (input[i] == '.' && input[i + 1] != '.' && numValue != 0);
			else if (input[i] == 'f' && !input[i + 1] && strchr(input, '.')) {
				std::cout  << BOLDWHITE << "int    : \'" << static_cast<int>(numValue) << "\'" << std::endl;
				return (1);
			}
			else {
				std::cout << BOLDWHITE << "int    : \'" << "Impossible" << "\'" << std::endl;
				return (0);
			}
		}
		i++;
	}
	std::cout  << BOLDWHITE << "int    : \'" << static_cast<int>(numValue) << "\'" << std::endl;
	return (1);
}

/*=========================== [Float] =========================================*/
int Conversion::floatChecker(char *input) {
	int i = 0;

	// Checker for {nanf, nan, inff, inf, +inff, +inf, -inff, -inf}
	if (!strcmp(input, "nanf") || !strcmp(input, "nan")) {
		std::cout << BOLDWHITE << "float  : \'" << "nanf" << "\'" << std::endl;
		return (1);
	}
	else if (!strcmp(input, "inff") || !strcmp(input, "inf") || !strcmp(input, "+inff") || !strcmp(input, "+inf")) {
		std::cout << BOLDWHITE << "float  : \'" << "inff" << "\'" << std::endl;
		return (1);
	}
	else if (!strcmp(input, "-inff") || !strcmp(input, "-inf")) {
		std::cout << BOLDWHITE << "float  : \'" << "-inff" << "\'" << std::endl;
		return (1);
	}

	// The rest of the numbers combinations.
	float	numValue = std::atof(input);
	int		intNum = std::atoi(input);

	if (!strcmp(input, "0.0")) {
		std::cout  << BOLDWHITE << "float  : \'" << "0.0f" << "\'" << std::endl;
		return (1);
	}
	while (input[i]) {
		if (!std::isdigit(input[i])) {
			if (input[i] == '+' && input[i + 1] != '+' && !input[i - 1] && numValue != 0);
			else if (input[i] == '-' && input[i + 1] != '-' && !input[i - 1] && numValue != 0);
			else if (input[i] == '.' && input[i + 1] != '.' && numValue != 0) {
				if (!input[i + 1] || (input[i + 1] == 'f' && !input[i + 2])) {
					std::cout  << BOLDWHITE << "float  : \'" << static_cast<float>(numValue) << ".0f\'" << std::endl;
					return (1);
				}
			}
			else if (input[i] == 'f' && !input[i + 1] && numValue != 0) {
				if (!strchr(input, '.')) {
					std::cout  << BOLDWHITE << "float  : \'" << static_cast<float>(numValue) << ".0f\'" << std::endl;
					return (1);
				}
				std::cout  << BOLDWHITE << "float  : \'" << static_cast<float>(numValue) << "f\'" << std::endl;
				return (1);
			}
			else {
				std::cout << BOLDWHITE << "float  : \'" << "Impossible" << "\'" << std::endl;
				return (0);
			}
		}
		i++;
	}
	// Check for numbers without dots. (234)
	if (!strchr(input, '.') && numValue != 0) {
		std::cout  << BOLDWHITE << "float  : \'" << static_cast<float>(numValue) << ".0f\'" << std::endl;
		return (1);
	}
	if (numValue == intNum) {
		std::cout  << BOLDWHITE << "float  : \'" << static_cast<float>(numValue) << ".0f\'" << std::endl;
		return (1);
	}
	std::cout  << BOLDWHITE << "float  : \'" << static_cast<float>(numValue) << "f\'" << std::endl;
	return (1);
}
/*=========================== [Double] =========================================*/
int Conversion::doubleChecker(char *input) {
int i = 0;

	// Checker for {nanf, nan, inff, inf, +inff, +inf, -inff, -inf}
	if (!strcmp(input, "nanf") || !strcmp(input, "nan")) {
		std::cout << BOLDWHITE << "double : \'" << "nan" << "\'" << std::endl;
		return (1);
	}
	else if (!strcmp(input, "inff") || !strcmp(input, "inf") || !strcmp(input, "+inff") || !strcmp(input, "+inf")) {
		std::cout << BOLDWHITE << "double : \'" << "inf" << "\'" << std::endl;
		return (1);
	}
	else if (!strcmp(input, "-inff") || !strcmp(input, "-inf")) {
		std::cout << BOLDWHITE << "double : \'" << "-inf" << "\'" << std::endl;
		return (1);
	}

	// The rest of the numbers combinations.
	double	numValue = std::atof(input);
	int		intNum = std::atoi(input);

	if (!strcmp(input, "0.0")) {
		std::cout  << BOLDWHITE << "double : \'" << "0.0" << "\'" << std::endl;
		return (1);
	}
	while (input[i]) {
		if (!std::isdigit(input[i])) {
			if (input[i] == '+' && input[i + 1] != '+' && !input[i - 1] && numValue != 0);
			else if (input[i] == '-' && input[i + 1] != '-' && !input[i - 1] && numValue != 0);
			else if (input[i] == '.' && input[i + 1] != '.' && numValue != 0) {
				if (!input[i + 1] || (input[i + 1] == 'f' && !input[i + 2])) {
					std::cout  << BOLDWHITE << "double : \'" << static_cast<double>(numValue) << ".0\'" << std::endl;
					return (1);
				}
			}
			else if (input[i] == 'f' && !input[i + 1] && numValue != 0) {
				if (!strchr(input, '.')) {
					std::cout  << BOLDWHITE << "double : \'" << static_cast<double>(numValue) << ".0\'" << std::endl;
					return (1);
				}
				std::cout  << BOLDWHITE << "double : \'" << static_cast<double>(numValue) << "\'" << std::endl;
				return (1);
			}
			else {
				std::cout << BOLDWHITE << "double : \'" << "Impossible" << "\'" << std::endl;
				return (0);
			}
		}
		i++;
	}
	// Check for numbers without dots. (234)
	if (!strchr(input, '.') && numValue != 0) {
		std::cout  << BOLDWHITE << "double : \'" << static_cast<double>(numValue) << ".0\'" << std::endl;
		return (1);
	}
	if (numValue == intNum) {
		std::cout  << BOLDWHITE << "double : \'" << static_cast<double>(numValue) << ".0\'" << std::endl;
		return (1);
	}
	std::cout  << BOLDWHITE << "double : \'" << static_cast<double>(numValue) << "\'" << std::endl;
	return (1);
}
/*===============================================================================*/
void Conversion::convert(char *input) {
	charChecker(input);
	intChecker(input);
	floatChecker(input);
	doubleChecker(input);

}
/*===============================================================================*/
