# include "easyfind.h"


/*===============================================================================*/
int main() {
    {
        std::cout << "\n#================ [Arrays] ====================#\n" << std::endl;
        std::array<int, 6> intArr = {2, 1, 2, 3, 42, 5};
        easyfind(intArr, 2);
        easyfind(intArr, 20);

        std::array<char, 6> charArr = {'1', '5', '2', '3', '4', '5'};
        easyfind(charArr, '5'); // last index
    }

    {
        std::cout << "\n#================ [Vectors] ===================#\n" << std::endl;
    /* vector cannot be initialized with an initializer list: */
        std::vector<int> intVector;
    /* Filling the vector with values: */
        for (int i = 0; i < 10; i++) {
            intVector.push_back(i);
        }
    /* Printing the vector: */
        easyfind(intVector, 5);
        easyfind(intVector, 9); // last element
        easyfind(intVector, 50);
    }
 
    {
        std::cout << "\n#================ [Deques] ===================#\n" << std::endl;
        std::deque<int> intDeque;
    /*Filling the deque with values: */
        intDeque.push_back(1);
        intDeque.push_back(2);
        intDeque.push_back(3);
        intDeque.push_back(4);
        intDeque.push_back(5);
        intDeque.push_back(6);

    /* Printing the deque: */
        // for (std::deque<int>::iterator it = intDeque.begin(); it < intDeque.end(); it++) {
        //     std::cout << *it << std::endl;
        // }
        easyfind(intDeque, 5);
        easyfind(intDeque, 6); // last element
        easyfind(intDeque, 7);
    }

    {
        std::cout << "\n#============= [Forward_list] ================#\n" << std::endl;
        std::cout << BOLDMAGENTA << "Forward_list cannot be tested:\nNo iterator until (c++11)" << RESET << std::endl;
    }

    {
        std::cout << "\n#================= [List] ====================#\n" << std::endl;
        std::list<int> intList;
    /* Filling the forward_list with values: */
        intList.push_back(1);
        intList.push_back(2);
        intList.push_back(3);
        intList.push_back(4);
        intList.push_back(5);
        intList.push_back(6);
    /* Printing the Forward list*/
        // for (std::list<int>::iterator it = intList.begin(); it != intList.end(); it++) {
        //     std::cout << *it << std::endl;
        // }
        easyfind(intList, 5);
        easyfind(intList, 6); // last element
        easyfind(intList, 7);
    }
    std::cout << "\n#==============================================#\n" << std::endl;
    return (EXIT_SUCCESS);
}

/*===============================================================================*/