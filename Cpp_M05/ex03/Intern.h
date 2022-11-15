#ifndef INTERN_H
#define INTERN_H

/*===============================================================================*/
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
# define RESET		"\033[0m"			   /* Reset the color */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */

/*===============================================================================*/
# include <iostream>
# include <string>
# include <cstdlib>
# include <iomanip>
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"
# include "Bureaucrat.h"

class Bureaucrat;

/*===============================================================================*/
class Intern {
public:
	Intern();
	Intern(const Intern &copy);
	~Intern();
	Intern	&operator=(const Intern &intern);
	Form	*makeForm(const std::string &formName, const std::string &formTarget);

	Form	*ShrubberyForm(std::string formTarget);
	Form	*RobotomyForm(std::string formTarget);
	Form	*PresidentialForm(std::string formTarget);

};
// methodsArray points to a member of Intern that takes (std::string)
typedef Form* (Intern::*methodsArray)(std::string target);
/*===============================================================================*/
#endif //INTERN_H