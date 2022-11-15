#include <iostream>
#include <string>
#include <cstdlib>


/*=====================================================================================*/
class Base {
	virtual void printing() {
		std::cout << "Hi" << std::endl;
	};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

/*=====================================================================================*/
/**
 * @brief  #randomly instanciates A, B or C and returns the instance as a Base pointer
 * 
 * @return Base* 
 */
Base * generate(void) {
	Base* base = NULL;
	srand(time(NULL));
	int i = (rand() % 3);

	std::cout << "generate(void)" << std::endl;
	std::cout << "--------------" << std::endl;
	if (i == 0) {
		std::cout << "from generate: -> (A)" << std::endl;
		return (base = new A());
	}
	else if (i == 1) {
		std::cout << "from generate: -> (B)" << std::endl;
		return (base = new B);
	}
	else {
		std::cout << "from generate: -> (C)" << std::endl;
		return (base = new C);
	}
	return (base);
}

/*=====================================================================================*/
void identify(Base* p) {
	std::cout << "identify(Base* p)" << std::endl;
	std::cout << "------------------" << std::endl;
	if (dynamic_cast<A*>(p))
		std::cout << "The argument is class : [A]" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "The argument is class : [B]" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "The argument is class : [C]" << std::endl;
	else
		std::cout << "null" << std::endl;

}

/*=====================================================================================*/
void identify(Base& p) {
	std::cout << "identify(Base& p)" << std::endl;
	std::cout << "------------------" << std::endl;

	try {
		dynamic_cast<A&>(p);
		std::cout << "The argument is class : [A]" << std::endl;
	}
	catch (std::exception &) {
		//std::cout << " not A" << std::endl;
		}
	try {
		dynamic_cast<B&>(p);
		std::cout << "The argument is class : [B]" << std::endl;
	}
	catch(std::exception &) {
		//std::cout << " not B" << std::endl;
		}
	try {
		dynamic_cast<C&>(p);
		std::cout << "The argument is class : [C]" << std::endl;
	}
	catch(std::exception &){
		//std::cout << " not C" << std::endl;
		}
}

/*=====================================================================================*/
int main() {
	std::cout << "#=========================================#" << std::endl;
	Base * base = generate();
	std::cout << "#=========================================#" << std::endl;
	identify(base);
	std::cout << "#=========================================#" << std::endl;
	identify(*base);
	std::cout << "#=========================================#" << std::endl;
	delete(base);
	return 0;
}
/*=====================================================================================*/