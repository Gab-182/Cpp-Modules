# include "Base.h"

/*===============================================*/
// int main(void) {
//     {    
//         int a = 5;
//         int b = 6;

//         std::cout << "===========================" << std::endl;
//         std::cout << "Befor swapping two integers." << std::endl;
//         std::cout << "int a = " << a << std::endl;
//         std::cout << "int b = " << b << std::endl;
//         swap(&a, &b);
//         std::cout << "After swapping" << std::endl;
//         std::cout << "int a = " << a << std::endl;
//         std::cout << "int b = " << b << std::endl;
//         std::cout << "===========================" << std::endl;
//     }
//     {
//         char a = '5';
//         char b = '9';

//         std::cout << "Befor swapping two chars." << std::endl;
//         std::cout << "char a = " << a << std::endl;
//         std::cout << "char b = " << b << std::endl;
//         swap(&a, &b);
//         std::cout << "After swapping" << std::endl;
//         std::cout << "char a = " << a << std::endl;
//         std::cout << "char b = " << b << std::endl;
//         std::cout << "===========================" << std::endl;
//         std::cout << "The min value is: " << min(a, b) << std::endl;
//         std::cout << "===========================" << std::endl;
//         std::cout << "The max value is: " << max(a, b) << std::endl;
//         std::cout << "===========================" << std::endl;
//     }
//     return (EXIT_SUCCESS);
// }

/*===============================================*/
// NOTE: 
// 1. The template function is defined in the header file.
// 2. WE PUT (::min or :: max) to tell the compiler that we are using the our function not the one in std class.

int main( void ) {
    int a = 2;
    int b = 3;

    swap( &a, &b );

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    swap(&c, &d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}
/*===============================================*/
// class Awesome {
//     public:
//         Awesome( void ) : _n( 0 ) { }
//         Awesome( int n ) : _n( n ) { }
//         Awesome & operator=( Awesome const & rhs ) { this->_n = rhs._n; return *this; }
//         bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
//         bool operator!=( Awesome const & rhs ) const { return (this->_n != rhs._n); }
//         bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
//         bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
//         bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
//         bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
//         int get_n() const { return this->_n; }
//     private:
//         int _n;
// };
// std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get_n(); return o; }

// int main() {
//     Awesome a(2), b(4);

//     swap(&a, &b);
//     std::cout << a << " " << b << std::endl;
//     std::cout << max(a, b) << std::endl;
//     std::cout << min(a, b) << std::endl;
//     return 0;
// }
/*===============================================*/
