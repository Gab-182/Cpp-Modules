# include "Span.h"


/*===============================================================================*/
Span::Span() {
    std::cout << BOLDGREEN << "[Default] constructor created" << RESET << std::endl;
    this->size = 0;
}

/*===============================================================================*/
Span::Span(unsigned int n) {
    std::cout << BOLDGREEN << "Constructor with one argument called" << RESET << std::endl;
    this->size = n;
}

/*===============================================================================*/
Span::~Span() {
    std::cout << BOLDRED << "\nDestructor called" << RESET << std::endl;
}

/*===============================================================================*/
Span::Span(Span const &copy) {
    this->size = copy.size;
    if (this->intVec.size() > 0)
        this->intVec.clear();
    this->intVec = copy.intVec; // Check more about this step.   
}

/*===============================================================================*/
Span& Span::operator=(Span const &src) {
    this->size = src.size;
    if (this->intVec.size() > 0)
        this->intVec.clear();
    this->intVec = src.intVec; // Check more about this step.
    return (*this);
}

/*===============================================================================*/
void Span::addNumber(int num) {
    if (this->intVec.size() + 1 <= this->size) {
        this->intVec.push_back(num);
        // std::cout << BOLDGREEN << "[" << num << "], Added to the container." << RESET<< std::endl;
    }
    else {
        std::cout << BOLDRED << "Can't add [" << num << "], the container is reached the Max size."<< std::endl;
    }
}

/*===============================================================================*/
int Span::longestSpan() {
    if (this->intVec.size() == 0 || this->intVec.size() == 1) {
        throw (std::invalid_argument("Exception: (Empty) or (one element) Vector."));
    }
    else
        return (this->maxVec() - this->minVec());
    return (0);
}

/*===============================================================================*/
/**
 ** # Fined the difference between each two numbers in the array;
 ** # Store these values in an array
 ** # Then choose the minimum value from the array
 */
int Span::shortestSpan() {
    std::vector<int> diffVec;
    /* Iterate through the vector to find the difference between each two numbers. */
    if (this->intVec.size() == 0 || this->intVec.size() == 1) {
        throw (std::invalid_argument("Exception: (Empty) or (one element) Vector."));
    }
    else {
        for (std::vector<int>::iterator it1 = this->intVec.begin(); it1 != this->intVec.end(); it1++) {
            for (std::vector<int>::iterator it2 = (this->intVec.begin() + 1); it2 != this->intVec.end(); it2++) {
                if (*it1 > *it2)
                    diffVec.push_back(*it1 - *it2);
            }
        }
    }
    return (*min_element(diffVec.begin(), diffVec.end()));
}

/*===============================================================================*/
int Span::getSize() {
    return (this->size);
}

/*===============================================================================*/
/*===============================================================================*/
/*===============================================================================*/
/*===============================================================================*/
void Span::printVector() {
    int index = 0;;
    for (std::vector<int>::iterator it = this->intVec.begin(); it != this->intVec.end(); it++) {
        std::cout << BOLDYELLOW << "intVec[" << index << "] = " << BOLDBLUE << *it << RESET << std::endl;
        index++;
    }
}

/*===============================================================================*/
void Span::fillVector() {
    std::srand(unsigned(std::time(nullptr)));
    std::vector<int> vec(this->size);
    this->intVec = vec;
    std::generate(this->intVec.begin(), this->intVec.end(), std::rand);
}

/*===============================================================================*/
int Span::maxVec() {
    int max = *max_element(this->intVec.begin(), this->intVec.end());
    return (max);
}

/*===============================================================================*/
int Span::minVec() {
    int min = *min_element(this->intVec.begin(), this->intVec.end());
    return (min);
}

/*===============================================================================*/
// int Span::secMinVec() {
//     std::vector<int>::iterator it = this->intVec.begin();
//     int secondSmallestNum = *(this->intVec.begin());
//     while (it != this->intVec.end())
//     {
//         if(secondSmallestNum > *it)
//         {
//             if(*it != this->minVec())
//                 secondSmallestNum = *it;
//         }
//         it++;
//     }
//     return (secondSmallestNum);
// }
/*===============================================================================*/

