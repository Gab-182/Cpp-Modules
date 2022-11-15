# include "Bureaucrat.h"
# include "Form.h"
# include "ShrubberyCreationForm.h"
# include "RobotomyRequestForm.h"
# include "PresidentialPardonForm.h"


int main() {
	/*==============[ShrubberyCreationForm_execution exception]===============*/
	std::cout << "#=========[ShrubberyCreationForm_execution]=========#" << std::endl;
	{
		// Required grades: sign 145, exec 137
		Bureaucrat bureaucrat = Bureaucrat("Zack", 144);
		ShrubberyCreationForm form = ShrubberyCreationForm("form_1");
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}
	/*==============[ShrubberyCreationForm execution success]===============*/
	std::cout << "#=========[ShrubberyCreationForm_execution]=========#" << std::endl;
	{
		// Required grades: sign 145, exec 1372, exec 45
		Bureaucrat bureaucrat = Bureaucrat("Zack", 120);
		ShrubberyCreationForm form = ShrubberyCreationForm("form_2");
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	/*==============[RobotomyRequestForm execution exception]===============*/
	std::cout << "#==============[RobotomyRequestForm]================#" << std::endl;
	{
		//Required grades: sign 72, exec 45
		Bureaucrat bureaucrat = Bureaucrat("Zack", 46);
		RobotomyRequestForm form = RobotomyRequestForm("form_3");
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	/*==============[RobotomyRequestForm execution success]===============*/
	std::cout << "#==============[RobotomyRequestForm]================#" << std::endl;
	{
		//Required grades: sign 72, exec 45
		Bureaucrat bureaucrat = Bureaucrat("Zack", 44);
		RobotomyRequestForm form = RobotomyRequestForm("form_4");
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	/*==============[PresidentialPardonForm execution exception]===============*/
	std::cout << "#=============[PresidentialPardonForm]==============#" << std::endl;
	{
		//Required grades: sign 25, exec 5
		Bureaucrat bureaucrat = Bureaucrat("Zack", 6);
		PresidentialPardonForm form = PresidentialPardonForm("form_5");
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	/*==============[PresidentialPardonForm execution success]===============*/
	std::cout << "#=============[PresidentialPardonForm]==============#" << std::endl;
	{
		//Required grades: sign 25, exec 5
		Bureaucrat bureaucrat = Bureaucrat("Zack", 4);
		PresidentialPardonForm form = PresidentialPardonForm("form_6");
		form.execute(bureaucrat);
		std::cout << form << std::endl;
	}

	/*=====================[Bureaucrat execution Failed]======================*/
	std::cout << "#===========[Bureaucrat executeForm()]==============#" << std::endl;

	try {
		Bureaucrat bureaucrat = Bureaucrat("Zack", 7);
		PresidentialPardonForm form = PresidentialPardonForm("form_7");
		form.beSigned(bureaucrat);
		bureaucrat.executeForm(form);
		std::cout << form << std::endl;
	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}

	/*=====================[Bureaucrat execution success]=====================*/
	std::cout << "#===========[Bureaucrat executeForm()]==============#" << std::endl;

	try {
		Bureaucrat bureaucrat = Bureaucrat("Zack", 4);
		PresidentialPardonForm form = PresidentialPardonForm("form_8");
		form.beSigned(bureaucrat);
		bureaucrat.executeForm(form);
		std::cout << form << std::endl;
	}
	catch (std::string &exception) {
		std::cout << exception << std::endl;
	}

	std::cout << "#===================================================#" << std::endl;
	/*========================================================================*/

	return 0;
}

/*============================================================================*/