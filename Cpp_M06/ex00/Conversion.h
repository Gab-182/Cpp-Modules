#ifndef CONVERSION_H
#define CONVERSION_H

/*===============================================================================*/
#define BLACK   "\033[30m"      /* Black */
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */
#define YELLOW  "\033[33m"      /* Yellow */
#define BLUE    "\033[34m"      /* Blue */
#define MAGENTA "\033[35m"      /* Magenta */
#define CYAN    "\033[36m"      /* Cyan */
#define WHITE   "\033[37m"      /* White */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define RESET		"\033[0m"			   /* Reset the color */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */

/*===============================================================================*/
# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>

/*============================================================================*/

class Conversion {
private:
	std::string input;
public:
	Conversion();
	~Conversion();
	Conversion(const Conversion &copy);
	Conversion &operator=(const Conversion &other);
	/*----------------------------------------------*/
	const std::string &getInput() const;
	/*----------------------------------------------*/
	int 	charChecker(char* input);
	int 	intChecker(char *input);
	int 	floatChecker(char *input);
	int 	doubleChecker(char *input);

	void	convert(char *input);

};


#endif //CONVERSION_H
