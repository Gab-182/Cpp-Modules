#include "inter.h"


/*===============================================*/
int main () {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char array2[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};

    iter(array, 10, print);
    std::cout << "===========================" << std::endl;
    iter(array2, 10, print);
    return (EXIT_SUCCESS);
}

/*===============================================*/
// class Awesome {
//     public:
//         Awesome( void ) : _n( 42 ) { return; }
//         int get( void ) const { return this->_n; }
//     private:
//         int _n;
// };

// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
// template< typename T >
// void print( T const & x ) { std::cout << x << std::endl; return; }

// int main() {
//     int tab[] = { 0, 1, 2, 3, 4 };
//     Awesome tab2[5];

//     iter( tab, 5, print);
//     iter( tab2, 5, print);
//     return 0;
// }
/*===============================================*/
