#include "PresidentialPardonForm.h"


/*
 * According to the subject:
 * -------------------------
 * Sign grade = 25
 * exec grade = 5
 * */
/*===============================================================================*/
PresidentialPardonForm::PresidentialPardonForm()
		: Form("PresidentialPardonForm", false, 25, 5) {
	std::cout << BOLDGREEN << "[Default PresidentialPardonForm Constructor] called" << std::endl;
}

/*------------------------------------------*/
/*
 * Since the PresidentialPardonForm class is a child of the Form class,
 * So instead of initializing each attribute, we use the constructor of the parent class.
 * */
PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
		: Form("PresidentialPardonForm", false, 25, 5) {
	std::cout << BOLDGREEN << "[PresidentialPardonForm Constructor] called" << std::endl;
	this->target = target;
}

/*------------------------------------------*/
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
	std::cout << BOLDRED << "[PresidentialPardonForm copy constructor] called" << RESET << std::endl;
	*this = copy;
}
/*------------------------------------------*/
PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << BOLDRED << "[PresidentialPardonForm Destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &form) {
	if (this != &form) {
		this->target = form.getTarget();
	}
	return (*this);
}

/*===============================================================================*/
const std::string &PresidentialPardonForm::getTarget() const {
	return (target);
}

/*------------------------------------------*/
void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
	try {
		if (bureaucrat.getGrade() <= this->getExcuteGrade()) {
			std::cout << BOLDYELLOW << "[" << this->getTarget() << "] has been pardoned by Zaphod Beeblebrox."
					  << std::endl << "=============================================="
					  << RESET << std::endl;
		} else {
			throw (Exceptions::ExecuteException());
		}
	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}
}

/*===============================================================================*/