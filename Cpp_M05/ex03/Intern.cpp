#include "Intern.h"
# define CALL_MEMBER_FN(object,ptrToMember) ((object).*(ptrToMember))


/*===========================================================================*/
Intern::Intern() {
	std::cout << BOLDGREEN "[Intern Default constructor] called" RESET << std::endl;
}

/*------------------------------------------*/
Intern::Intern(const Intern &copy) {
	std::cout << BOLDGREEN "[Intern Copy constructor] called" RESET << std::endl;
}

/*------------------------------------------*/
Intern::~Intern() {
	std::cout << BOLDRED "[Intern Destructor] called" RESET << std::endl;
}

/*------------------------------------------*/
Intern &Intern::operator=(const Intern &intern) {

	return (*this);
}

/*===========================================================================*/
Form	*Intern::ShrubberyForm(std::string formTarget) {
	return (new ShrubberyCreationForm(formTarget));
}

/*------------------------------------------*/
Form	*Intern::RobotomyForm(std::string formTarget) {
	return (new RobotomyRequestForm(formTarget));
}

/*------------------------------------------*/
Form	*Intern::PresidentialForm(std::string formTarget) {
	return (new PresidentialPardonForm(formTarget));
}

/*===========================================================================*/
Form *Intern::makeForm(const std::string &formName, const std::string &formTarget) {
	std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	Intern intern;
	methodsArray forms[3] = {&Intern::ShrubberyForm, &Intern::RobotomyForm, &Intern::PresidentialForm};

	for (int i=0; i<3; i++) {
		if (formNames[i] == formName) {
			std::cout << BOLDMAGENTA << "Intern creates [" << formName << "] form." << RESET << std::endl;
			return (CALL_MEMBER_FN(intern, forms[i])(formTarget));
		}
	}
	std::cout << BOLDYELLOW << "Form ["<< formName << "] is not valid" << RESET << std::endl;
	return (NULL);
}

/*===========================================================================*/