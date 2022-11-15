# include "Span.h"


/*===============================================================================*/
int main()
{
    std::cout << BOLDCYAN <<  "\n\t[General testing for the class constructors && operators]\n" << RESET << std::endl;
    std::cout << "#===================" << BOLDGREEN << "[The Original integer Vector]" << RESET << "========================#" << std::endl;
    Span sp = Span(30);
    // sp.fillVector();
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.printVector();
    std::cout << BOLDWHITE << "Shortest Span: [" << sp.shortestSpan() << "]" << std::endl;
    std::cout << BOLDWHITE << "Longest Span: [" << sp.longestSpan() << "]" << std::endl;

    std::cout << "#===========================" << BOLDGREEN << "[Empty Vector]" << RESET << "===============================#" << std::endl;
    // try {
    // Span spa = Span(10);
    //     std::cout << BOLDWHITE << "Shortest Span: [" << spa.shortestSpan() << "]" << std::endl;
    //     std::cout << BOLDWHITE << "Longest Span: [" << spa.longestSpan() << "]" << std::endl;
    //     spa.printVector();
    // }
    // catch (std::exception &e) {
    //     std::cout << BOLDRED << e.what() << RESET <<  std::endl;
    // }
    std::cout << "#=========================" << BOLDGREEN << "[Copy Constructor]" << RESET << "=============================#" << std::endl;
    Span sp1(sp);
    sp1.printVector();
    std::cout << BOLDWHITE << "Shortest Span: [" << sp1.shortestSpan() << "]" << std::endl;
    std::cout << BOLDWHITE << "Longest Span: [" << sp1.longestSpan() << "]" << std::endl;
    std::cout << "#=======================" << BOLDGREEN << "[Assignment Opperator]" << RESET << "===========================#" << std::endl;
    Span sp2 = sp1;
    sp2.printVector();
    std::cout << BOLDWHITE << "Shortest Span: [" << sp2.shortestSpan() << "]" << std::endl;
    std::cout << BOLDWHITE << "Longest Span: [" << sp2.longestSpan() << "]" << std::endl;
    std::cout << "#========================================================================#" << std::endl;


    return 0;
}
/*===============================================================================*/