/*===============================================================================*/
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

# include <deque>
# include <stack>
# include <iterator>
# include <algorithm>

/*===============================================================================*/
# define BLACK   "\033[30m"      /* Black */
# define RED     "\033[31m"      /* Red */
# define GREEN   "\033[32m"      /* Green */
# define YELLOW  "\033[33m"      /* Yellow */
# define BLUE    "\033[34m"      /* Blue */
# define MAGENTA "\033[35m"      /* Magenta */
# define CYAN    "\033[36m"      /* Cyan */
# define WHITE   "\033[37m"      /* White */
# define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
# define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
# define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
# define RESET		"\033[0m"			   /* Reset the color */
# define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
# define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
# define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
# define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
# define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */


/*===============================================================================*/
template <typename T>
class MutantStack: public std::stack<T> {
    public:
        MutantStack();
        ~MutantStack();
        MutantStack(MutantStack const &copy);
        MutantStack &operator=(MutantStack const &rhs);
        /*-----------------------------------------------*/
        /* define an iterator */
        typedef typename std::deque<T>::iterator iterator;
        /*-----------------------------------------------*/
        iterator    begin() {
            return (this->c.begin());
        }
        /*-----------------------------------------------*/
        iterator    end() {
            return (this->c.end());
        }
        /*-----------------------------------------------*/
};

/*===============================================================================*/
template <typename T>
MutantStack<T>::MutantStack() {
    std::cout << BOLDGREEN << "Default constructor called" << RESET << std::endl;
    // std::stack<T> mutantStack;
}

template <typename T>
MutantStack<T>::~MutantStack() {
    std::cout << BOLDRED << "Destructor called" << RESET << std::endl;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &copy) {
    std::cout << BOLDGREEN << "Copy constructor called" << RESET << std::endl;
    if (*this!= copy)
    {
        this->c = copy.c;
    }
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(MutantStack const &rhs) {
    std::cout << BOLDGREEN << "Assignment operator called" << RESET << std::endl;
    std::stack<T>::operator=(rhs);
    return (*this);
}

/*===============================================================================*/