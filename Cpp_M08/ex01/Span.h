#ifndef SPAN_H
# define SPAN_H

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
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

# include <iterator>
# include <vector>
# include <algorithm>


/*===============================================================================*/
class Span {
	private:
		unsigned int size;
		std::vector<int> intVec;

	public:
		Span();
		Span(unsigned int n);
		~Span();
		Span(Span const &copy);
	/* Methods. */
		Span	&operator=(Span const &src);
		Span	&operator[](Span const &src);
		void	addNumber(int num);
		int 	shortestSpan();
		int 	longestSpan();
		int		getSize();

	/* Helper Methods. */
		void	printVector();
		void	fillVector();
		int		maxVec();
		int		minVec();
};


/*===============================================================================*/
#endif //SPAN_H
