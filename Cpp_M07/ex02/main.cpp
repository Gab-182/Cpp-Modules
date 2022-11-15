#include "Array.h"

/*===================================================================*/
int main() {
        try {
        //-------------------------------------------------------------------------------------
            // 1. Create an array of 5 integers
            Array<int> intArray(5);
            intArray.printArray(intArray.getSize());
            std::cout << "-------------------" << std::endl;
            intArray[0] = 1;
            intArray[1] = 2;
            intArray[2] = 3;
            intArray[3] = 4;
            intArray[4] = 5;
            // Generating an error when trying to access an element out of the array
            intArray[5] = 6;

            intArray.printArray(intArray.getSize());
            std::cout << "-------------------" << std::endl;
        //-------------------------------------------------------------------------------------
        }
        catch (std::exception &e) {
            std::cout << BOLDRED << e.what() << RESET << std::endl;
        }

    return (EXIT_SUCCESS);
}

/*===================================================================*/
// int main() {
//     //-------------------------------------------------------------------------------------
//     std::cout << "==================================================" << std::endl;
//     std::cout << BOLDYELLOW << "[1] Default constructor" << RESET << std::endl;

//     Array<int> arr1;
//     //-------------------------------------------------------------------------------------
//     std::cout << "==================================================" << std::endl;
//     std::cout << BOLDYELLOW << "[2] Normal array size" << RESET << std::endl;

//     Array<int> arr2(10);
//     //-------------------------------------------------------------------------------------
//     std::cout << "==================================================" << std::endl;
//     std::cout << BOLDYELLOW << "[3] Wrong size" << RESET << std::endl;

//     Array<int> arr3(-143);
//     //-------------------------------------------------------------------------------------
//     std::cout << "==================================================" << std::endl;
//     std::cout << BOLDYELLOW << "[4] Empty arry, same as the default constructor." << RESET << std::endl;

//     Array<int> arr4(0);
//     //-------------------------------------------------------------------------------------
//     std::cout << "==================================================" << std::endl;
//     std::cout << BOLDYELLOW << "[5] Copy Constructor" << RESET << std::endl;

//     Array<int> arr5(arr2);
//     //-------------------------------------------------------------------------------------
//     std::cout << "==================================================" << std::endl;
//     std::cout << BOLDYELLOW << "[6] Assignment opperator" << RESET << std::endl;
//     Array<int> arr6 = arr2;
//     std::cout << "==================================================" << std::endl;
//     //-------------------------------------------------------------------------------------

//     return (EXIT_SUCCESS);
// }

/*===================================================================*/