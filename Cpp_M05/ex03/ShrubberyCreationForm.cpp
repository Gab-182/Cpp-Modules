# include "ShrubberyCreationForm.h"

/*
 * According to the subject:
 * -------------------------
 * Sign grade = 145
 * exec grade = 137
 * */
/*===============================================================================*/
ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("ShrubberyCreationForm", false, 145, 137) {
	std::cout << BOLDGREEN << "[Default ShrubberyCreationForm Constructor] called" << std::endl;
}

/*------------------------------------------*/
/*
 * Since the ShrubberyCreationForm class is a child of the Form class,
 * So instead of initializing each attribute, we use the constructor of the parent class.
 * */
ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: Form("ShrubberyCreationForm", false, 145, 137) {
	std::cout << BOLDGREEN << "[ShrubberyCreationForm Constructor] called" << std::endl;
	this->target = target;
}

/*------------------------------------------*/
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
	std::cout << BOLDRED << "[ShrubberyCreationForm copy constructor] called" << RESET << std::endl;
	*this = copy;
}
/*------------------------------------------*/
ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << BOLDRED << "[ShrubberyCreationForm Destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form) {
	if (this != &form) {
		this->target = form.getTarget();
	}
	return (*this);
}

/*===============================================================================*/
const std::string &ShrubberyCreationForm::getTarget() const {
	return (target);
}

/*------------------------------------------*/
void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
	try {
		if (bureaucrat.getGrade() <= this->getExcuteGrade()) {
			std::ofstream file(this->target + "_shrubbery");
			file << "          ,@@@@@@@," << std::endl
				 << "    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
				 << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
				 << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
				 << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
				 << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
				 << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
				 << "    |o|        | |         | |" << std::endl
				 << "    |.|        | |         | |" << std::endl
				 << " \\/ ._\\//_/__/ "
					" ,\\_//__\\/.  \\_//__/_" << std::endl;
			file.close();
			std::cout << BOLDYELLOW << "[" << this->target + "_shrubbery] file created successfully.\n";
			std::cout << "==============================================" << RESET << std::endl;
		} else {
			throw (Exceptions::ExecuteException());
		}
	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}
}

/*===============================================================================*/