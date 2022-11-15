#include "Form.h"
#include "Exceptions.h"
#include "Bureaucrat.h"

/*===============================================================================*/
Form::Form() : excuteGrade(0), signGrade(0), name("Default form name"){
	this->isSigned = false;
	std::cout << BOLDGREEN << "[Default Form Constructor] called" << std::endl;
}

/*------------------------------------------*/

Form::Form(const std::string &name, bool isSigned, const int signGrade, const int excuteGrade)
: name(name), isSigned(isSigned), signGrade(signGrade), excuteGrade(excuteGrade) {
	if (Form::getSignGrade() < 1) {
		throw (Exceptions::GradeTooHighException());
	}
	else if (Form::getSignGrade() > 150) {
			throw (Exceptions::GradeTooLowException());
	}
	std::cout << BOLDGREEN << "[Form Constructor] called" << std::endl;
}

/*------------------------------------------*/
Form::Form(const Form &copy)
	: name(copy.getName()), signGrade(getSignGrade()), excuteGrade(getExcuteGrade()) {
	this->isSigned = copy.isIsSigned();
	std::cout << BOLDGREEN << "[Form copy constructor] called" << std::endl;
}

/*------------------------------------------*/
Form::~Form() {
	std::cout << BOLDRED << "[Form Destructor] called" << RESET << std::endl;
}
/*===============================================================================*/
Form &Form::operator=(const Form &form) {
	if (this != &form) {
		this->isSigned = form.isIsSigned();
	}
	return (*this);
}

/*------------------------------------------*/
std::ostream &operator << (std::ostream &out, Form const & form) {
	out << BOLDMAGENTA << "Form name: [" << form.getName() << "]" << std::endl
	<< "Form excute grade: [" << form.getExcuteGrade()  << "]" << std::endl
	<< "Form sign grade:   [" << form.getSignGrade() << "]" << std::endl
	<< "Is signed:         [" << form.isIsSigned() << "]" << RESET;
	return (out);
}


/*===============================================================================*/
const std::string &Form::getName() const {
	return (name);
}

/*------------------------------------------*/
bool Form::isIsSigned() const {
	return (isSigned);
}

/*------------------------------------------*/
int Form::getSignGrade() const {
	return (signGrade);
}

/*------------------------------------------*/
void	Form::setIsSigned(bool isSigned) {
	this->isSigned = isSigned;
}

/*------------------------------------------*/
int Form::getExcuteGrade() const {
	return (this->excuteGrade);
}

/*------------------------------------------*/
void Form::beSigned(Bureaucrat &bureaucrat) {
	try {
		if (this->signGrade >= bureaucrat.getGrade()) {
			setIsSigned(true);
			std::cout << BOLDWHITE << "The Form: [" << this->getName()
					  << "] got signed by [" << bureaucrat.getName() << "]"
					  << RESET << std::endl;
		} else {
			throw (Exceptions::GradeTooLowException());
		}
	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}
}
/*===============================================================================*/