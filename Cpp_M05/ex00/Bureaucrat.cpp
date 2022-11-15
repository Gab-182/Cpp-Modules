#include "Bureaucrat.h"
#include "Exceptions.h"


/*===============================================================================*/
Bureaucrat::Bureaucrat() {
	this->name = "Default name";
	this->grade = 0;
    std::cout << BOLDGREEN << "[Default Bureaucrat Constructor] called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade){
	this->grade = grade;
	this->name = name;
    if (this->grade < 1)
        throw (Exceptions::GradeTooHighException());
    else if (this->grade > 150)
		throw (Exceptions::GradeTooLowException());
	std::cout << BOLDGREEN << "[Bureaucrat Constructor] called" << RESET << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
	this->grade = copy.getGrade();
	this->name = copy.getName();
//	if (this->grade < 1)
//		throw (Exceptions::GradeTooHighException());
//	else if (this->grade > 150)
//		throw (Exceptions::GradeTooLowException());
	std::cout << BOLDGREEN << "[Bureaucrat Copy Constructor] called" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << BOLDRED << "[Bureaucrat Destructor] called" << RESET << std::endl;
}

/*===============================================================================*/
const std::string &Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return grade;
}

/*===============================================================================*/
Bureaucrat &Bureaucrat::operator =(const Bureaucrat &bureaucrat) {
	this->grade = bureaucrat.getGrade();
	this->name = bureaucrat.getName();
//	if (grade < 1)
//		throw (Exceptions::GradeTooHighException());
//	else if (grade > 150)
//		throw (Exceptions::GradeTooLowException());
	return (*this);
}

std::ostream &operator << (std::ostream &out, Bureaucrat const & bureaucrat) {
	out << "# Bureaucrat [" << bureaucrat.getName()
	<< "] --> Grade [" << bureaucrat.getGrade() << "]";
	return (out);
}

/*===============================================================================*/
void Bureaucrat::incrementGrade() {
	int tmp = this->grade-1;
	try {
		if (tmp < 1)
			throw (Exceptions::GradeTooHighException());
		else if (tmp > 150)
			throw (Exceptions::GradeTooLowException());
		else
			this->grade--;
		std::cout << BOLDWHITE << "[Bureaucrat] Grade has been incremented" << RESET << std::endl;

	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}
}

/*------------------------------------------*/
void Bureaucrat::decrementGrade() {
	int tmp = this->grade+1;
	try {
		if (tmp < 1)
			throw (Exceptions::GradeTooHighException());
		else if (tmp > 150)
			throw (Exceptions::GradeTooLowException());
		this->grade++;
		std::cout << BOLDWHITE << "[Bureaucrat] Grade has been decremented" << RESET << std::endl;
	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}
}
/*===============================================================================*/