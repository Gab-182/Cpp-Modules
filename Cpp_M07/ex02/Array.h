# include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include <exception>
/*============================= [Colors] =====================================*/
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define RESET		"\033[0m"			   /* Reset the color */


/*=======================================================================================================*/
template <typename T>
class Array {
    private:
        T*              array;
        unsigned int    size;

    public:
        Array();
        Array(unsigned int size);
        ~Array();
        Array(Array & src);
        Array& operator=(Array const &rhs);
        T &operator[](unsigned int index) const;
        void printArray(unsigned int size);
        T getSize(); // Method to get the size of the array.
        void setSize(unsigned int size);
};

/*=======================================================================================================*/
/*=======================================================================================================*/
template <typename T>
Array<T>::Array() {
    std::cout << BOLDGREEN << "[Default] constructor called" << RESET << std::endl;
    this->array = new T[0]();
    this->size = 0;
}

/*=======================================================================================================*/
template <typename T>
Array<T>::Array(unsigned int size) {
    /**
     * (int) -> to convert the unsigned int to int, cause if we don't do that, 
     * the compiler will give the max value of unsigned int, which is 4294967295 <UINT_MAX> 
     * */

    if ((int)size < 0) {
        std::cout << BOLDRED << "Error: size can't be negative" << RESET << std::endl;
        std::cout << BOLDRED << "Empty Array Created" << RESET << std::endl;
        this->array = new T[0]();
    }
    else {
        this->size = size;
        this->array = new T[size]();
        memset(this->array, 0, size);
        std::cout << BOLDGREEN << "Array of size [" << this->size << "] created"  << RESET << std::endl;
        // printArray(size);
    }
}

/*=======================================================================================================*/
template <typename T>
Array<T>& Array<T>::operator=(Array const &rhs) {
    this->size = rhs.size;
    this->array = new T[this->size]();
    for (int i = 0; i < this->size; i++) {
        this->array[i] = rhs.array[i];
    }
    return (*this);
}

/*=======================================================================================================*/
template <typename T>
T& Array<T>::operator[](unsigned int index) const {
            if (index >= this->size)
                throw (std::out_of_range("Exception::Bad Index: Out of range."));
            return (this->array[index]);
}

/*=======================================================================================================*/
template <typename T>
void Array<T>::printArray(unsigned int size) {
    for (int i = 0; i < size; i++) {
        std::cout << BOLDWHITE << "array[" << i << "] = " << this->array[i] << RESET << std::endl;
    }    
}

/*=======================================================================================================*/
template <typename T>
Array<T>::~Array() {
    if (this->array)
        delete [] this->array;
    std::cout << BOLDRED << "Array deleted" << RESET << std::endl;
}

/*=======================================================================================================*/
template <typename T>
T Array<T>::getSize() {
    return (this->size);
}

/*=======================================================================================================*/
template <typename T>
void Array<T>::setSize(unsigned int size) {
    this->size = size;
}
/*=======================================================================================================*/
template <typename T>
Array<T>::Array(Array & copy) {
    this->setSize(copy.getSize());
    this->array = new T[size]();
    memcpy(this->array, copy.array, size);
    std::cout << BOLDGREEN << "Array copied" << RESET << std::endl;
    // printArray(this->size);
}

/*=======================================================================================================*/