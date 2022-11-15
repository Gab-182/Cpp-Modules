#include <iostream>
#include <string>
#include <cstdlib>

/*===============================================*/
/**
 * @brief Template function to swap two values.
 * 
 * @tparam T 
 * @param a 
 * @param b 
 */
template <typename T>
void swap(T *a, T *b)
{
    T tmp = *a;
    *a = *b;
    *b = tmp;
}

/*===============================================*/
/**
 * @brief Template function to return the minimum value.
 * 
 * @tparam T 
 * @param a 
 * @param b 
 */
template <typename T>
T min(T a, T b)
{
    if (a < b)
        return (a);
    else if (b < a)
        return (b);
    else // If the two of them are equal, then it returns the second one
        return (b);
}

/*===============================================*/
/**
 * @brief Template function to return the maximum value.
 * 
 * @tparam T 
 * @param a 
 * @param b 
 */
template <typename T>
T max(T a, T b)
{
    if (a > b)
        return (a);
    else if (b > a)
        return (b);
    else // If the two of them are equal, then it returns the second one
        return (b);
}
/*===============================================*/