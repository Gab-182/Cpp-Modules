#include <iostream>
#include <string>
#include <cstdlib>

/*===============================================*/
template <typename T>
void iter(T *array, int size, void(f)(T))
{
    for (int i = 0; i < size; i++)
        f(array[i]);
}

/*===============================================*/
/**
 * @brief  Prints the value of the given element.
 * 
 */
template <typename T>
void print(T element) {
    std::cout << element << std::endl;
}
/*===============================================*/