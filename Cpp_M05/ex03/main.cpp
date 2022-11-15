#include "Exceptions.h"
#include "Intern.h"
/*
 *
 */
int main() {
	Form *form;
	/*========================================================================*/
	std::cout << "#==============[ShrubberyCreationForm]============#" << std::endl;

	Intern intern1 = Intern();
	form = intern1.makeForm("shrubbery creation", "Form_1");
	delete(form);
	/*========================================================================*/
	std::cout << "#============[RobotomyRequestForm]================#" << std::endl;

	Intern intern2 = Intern();
	form = intern2.makeForm("robotomy request", "Form_2");
	delete(form);

	/*========================================================================*/
	std::cout << "#===========[PresidentialPardonForm]==============#" << std::endl;

	Intern intern3 = Intern();
	form = intern3.makeForm("presidential pardon", "Form_3");
	delete(form);

	/*========================================================================*/
	std::cout << "#=================[Not exist]====================#" << std::endl;

	Intern intern4 = Intern();
	form = intern4.makeForm("Ziko Form", "Form_3");
	delete(form);

	std::cout << "#===================================================#" << std::endl;
	/*========================================================================*/
	return 0;
}

/*============================================================================*/