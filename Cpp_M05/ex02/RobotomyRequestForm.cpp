#include "RobotomyRequestForm.h"

/*
 * According to the subject:
 * -------------------------
 * Sign grade = 72
 * exec grade = 45
 * */
/*===============================================================================*/
RobotomyRequestForm::RobotomyRequestForm()
		: Form("RobotomyRequestForm", false, 72, 45) {
	std::cout << BOLDGREEN << "[Default RobotomyRequestForm Constructor] called" << std::endl;
}

/*------------------------------------------*/
/*
 * Since the RobotomyRequestForm class is a child of the Form class,
 * So instead of initializing each attribute, we use the constructor of the parent class.
 * */
RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
		: Form("RobotomyRequestForm", false, 72, 45) {
	std::cout << BOLDGREEN << "[RobotomyRequestForm Constructor] called" << std::endl;
	this->target = target;
}

/*------------------------------------------*/
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
	std::cout << BOLDRED << "[RobotomyRequestForm copy constructor] called" << RESET << std::endl;
	*this = copy;
}
/*------------------------------------------*/
RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << BOLDRED << "[RobotomyRequestForm Destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &form) {
	if (this != &form) {
		this->target = form.getTarget();
	}
	return (*this);
}

/*===============================================================================*/
const std::string &RobotomyRequestForm::getTarget() const {
	return (target);
}

/*------------------------------------------*/
void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
	try {
		if (bureaucrat.getGrade() <= this->getExcuteGrade()) {
			std::cout << BOLDYELLOW << "some drilling noises"
					  << "[" << this->getTarget() << "] has been robotomized successfully 50% of the time"
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