# include "Exceptions.h"


/*===========================================================================*/

std::string Exceptions::GradeTooHighException() {
	return (BOLDCYAN "[Exception] The Grade is too high" RESET);
}

std::string Exceptions::GradeTooLowException() {
	return (BOLDCYAN "[Exception] The Grade is too low" RESET);
}

/*===========================================================================*/