#include "Bureaucrat.h"
#include "Exceptions.h"
#include "Form.h"


int main() {

	/*================[Exception from Form::beSigned]========================*/
	std::cout << "#-------------------[1]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("Zack", 44);
		Form form = Form("Form_1", false, 43, 12);
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}

	/*=============[From got signed through Form::beSigned]==================*/
	std::cout << "#-------------------[2]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("Zack", 44);
		Form form = Form("Form_2", false, 46, 12);
		form.beSigned(bureaucrat);
		std::cout << form << std::endl;
	}

	/*==============[Exception from the Bureaucrat signForm() method]=========*/
	std::cout << "#-------------------[3]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("Zack", 33);
		Form form = Form("Form_3", false, 32, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	/*======[From got signed by the Bureaucrat through signForm() method]======*/
	std::cout << "#-------------------[4]------------------------#" << std::endl;
	{
		Bureaucrat bureaucrat = Bureaucrat("Zack", 33);
		Form form = Form("Form_4", false, 35, 12);
		bureaucrat.signForm(form);
		std::cout << form << std::endl;
	}

	std::cout << "#----------------------------------------------#" << std::endl;
	/*========================================================================*/

	return 0;
}