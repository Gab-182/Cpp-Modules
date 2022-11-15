# include "Exceptions.h"


/*===========================================================================*/

std::string Exceptions::GradeTooHighException() {
	return (BOLDCYAN "[Exception] The Grade is too high to sign the form\n" RESET);

}

/*------------------------------------------*/
std::string Exceptions::GradeTooLowException() {
	return (BOLDCYAN "[Exception] The Grade is too low to sign the form\n" RESET);
}
/*------------------------------------------*/
std::string Exceptions::ExecuteException() {
	return (BOLDCYAN "[Exception] The Grade is too low to execute the form\n" RESET);
}

/*===========================================================================*/