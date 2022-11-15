#include "Bureaucrat.h"
#include "Exceptions.h"

/*
 * !NOTE:
 * ======
 * I commented the exception part for [copy constructor] and [assignment operator]
 * cause if already there is a something wrong with the grade, the object will not
 * be constructed from the first place.
 * */


int main() {

/*==============[The Grade passed to the constructor is to high]=================*/
	std::cout << "#-------------------[1]------------------------#" << std::endl;

	try {
		Bureaucrat bureaucrat = Bureaucrat("Zack", 0);
		std::cout << BOLDMAGENTA << bureaucrat << std::endl;
		/*
		 * Since we through an exception from the constructor then we did not
		 * create an object, that's way we don't delete it.*/
	}
	catch (std::string &exception) {
			std::cout << exception << std::endl;
	}

	/*===========[Increment the grade to the highest range]=====================*/
	std::cout << "#-------------------[2]------------------------#" << std::endl;

	{
		Bureaucrat bureaucrat = Bureaucrat("Zack", 2);
		std::cout << BOLDMAGENTA << bureaucrat << std::endl;
		bureaucrat.incrementGrade();
		bureaucrat.incrementGrade();
		std::cout << BOLDMAGENTA << bureaucrat << std::endl;
	}

	/*===========[Decrement the grade to the highest range]=====================*/
	std::cout << "#-------------------[3]------------------------#" << std::endl;

	{
		Bureaucrat bureaucrat = Bureaucrat("Zack", 149);
		std::cout << BOLDMAGENTA << bureaucrat << std::endl;
		bureaucrat.decrementGrade();
		bureaucrat.decrementGrade();
		std::cout << BOLDMAGENTA << bureaucrat << std::endl;
	}

	/*==============[Exception from the copy constructor]=======================*/
//	std::cout << "#-------------------[4]------------------------#" << std::endl;
//	{
//		Bureaucrat bureaucrat = Bureaucrat("Zack", 149);
//		try {
//			std::cout << BOLDMAGENTA << bureaucrat << std::endl;
//			bureaucrat.decrementGrade();
//			bureaucrat.decrementGrade();
//			Bureaucrat copyBureaucrat = Bureaucrat(bureaucrat);
//			std::cout << BOLDMAGENTA << copyBureaucrat << std::endl;
//		}
//		catch (std::string &exception) {
//			std::cout << exception << std::endl;
//		}
//	}

	/*============[Exception from the Assignment operator]=======================*/
//	std::cout << "#-------------------[5]------------------------#" << std::endl;
//
//	{
//		Bureaucrat Bob = Bureaucrat("Bob", 149);
//		try {
//			std::cout << BOLDMAGENTA << Bob << std::endl;
//			Bob.decrementGrade();
//			Bob.decrementGrade();
//			Bureaucrat bureaucrat = Bureaucrat("Zack", 12);
//			bureaucrat = Bob;
//			std::cout << BOLDMAGENTA << Bob << std::endl;
//		}
//		catch (std::string &exception) {
//			std::cout << exception << std::endl;
//		}
//	}
	std::cout << "#----------------------------------------------#" << std::endl;
	/*===========================================================================*/

	return 0;
}

/*===============================================================================*/