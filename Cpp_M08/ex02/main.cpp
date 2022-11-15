# include "MutantStack.h"


/*===============================================================================*/
// int main() {
//     MutantStack<int> stack_1;
//     stack_1.push(1);
//     stack_1.push(2);
//     stack_1.push(3);
//     stack_1.push(4);

//     std::cout << BOLDCYAN << "\n#===============================#" << RESET << std::endl;
//     std::cout << BOLDYELLOW << "[1] Printing the stack (iterators)" << RESET << std::endl;
//     std::cout << BOLDCYAN << "#===============================#\n" << RESET << std::endl;
//     MutantStack<int>::iterator stack_1_it = stack_1.begin();
//     MutantStack<int>::iterator stack_1_ite = stack_1.end();
//     std::cout << BOLDMAGENTA << "stack_1" << RESET << std::endl;
//     while (stack_1_it != stack_1_ite)
//     {
//         std::cout << BOLDBLUE << *stack_1_it << RESET << std::endl;
//         ++stack_1_it;
//     }

//     std::cout << BOLDCYAN << "\n#===============================#" << RESET << std::endl;
//     std::cout << BOLDYELLOW << "[2] Assignment operator" << RESET << std::endl;
//     std::cout << BOLDCYAN << "#===============================#\n" << RESET << std::endl;

//     {    
//         MutantStack<int> stack_2 = stack_1;
//         MutantStack<int>::iterator stack_2_it = stack_2.begin();
//         MutantStack<int>::iterator stack_2_ite = stack_2.end();
//         std::cout << BOLDMAGENTA << "stack_2" << RESET << std::endl;
//         while (stack_2_it != stack_2_ite)
//         {
//             std::cout << BOLDBLUE << *stack_2_it << RESET << std::endl;
//             ++stack_2_it;
//         }
//         std::cout << BOLDYELLOW << "\nMake sure the two stack are not the same." << RESET << std::endl;
//         stack_2.pop();

//         // Re Defining the iterators for stack_2
//         stack_2_it = stack_2.begin();
//         stack_2_ite = stack_2.end();
//         std::cout << BOLDCYAN << "----------------" << RESET << std::endl;
//         std::cout << BOLDMAGENTA << "stack_2 (new)" << RESET << std::endl;
//         while (stack_2_it != stack_2_ite)
//         {
//             std::cout << BOLDBLUE << *stack_2_it << RESET << std::endl;
//             ++stack_2_it;
//         }

//         // Re Defining the iterators for stack_1
//         stack_1_it = stack_1.begin();
//         stack_1_ite = stack_1.end();
//         std::cout << BOLDCYAN << "----------------" << RESET << std::endl;
//         std::cout << BOLDMAGENTA << "stack_1 (new)" << RESET << std::endl;
//         while (stack_1_it != stack_1_ite)
//         {
//             std::cout << BOLDBLUE << *stack_1_it << RESET << std::endl;
//             ++stack_1_it;
//         }
//     }

//     std::cout << BOLDCYAN << "\n#===============================#" << RESET << std::endl;
//     std::cout << BOLDYELLOW << "[3] Copy constructor" << RESET << std::endl;
//     std::cout << BOLDCYAN << "#===============================#\n" << RESET << std::endl;
    
//     {
//         MutantStack<int> stack_3(stack_1);
//         MutantStack<int>::iterator stack_3_it = stack_3.begin();
//         MutantStack<int>::iterator stack_3_ite = stack_3.end();
//         std::cout << BOLDMAGENTA << "stack_3" << RESET << std::endl;
//         while (stack_3_it != stack_3_ite)
//         {
//             std::cout << BOLDBLUE << *stack_3_it << RESET << std::endl;
//             ++stack_3_it;
//         }
//         std::cout << BOLDYELLOW << "\nMake sure the two stack are not the same." << RESET << std::endl;
//         stack_3.pop();

//         // Re define the iterators for stack_3
//         stack_3_it = stack_3.begin();
//         stack_3_ite = stack_3.end();
//         std::cout << BOLDCYAN << "----------------" << RESET << std::endl;
//         std::cout << BOLDMAGENTA << "stack_3 (new)" << RESET << std::endl;
//         while (stack_3_it != stack_3_ite)
//         {
//             std::cout << BOLDBLUE << *stack_3_it << RESET << std::endl;
//             ++stack_3_it;
//         }

//         // Re define the iterators for stack_1
//         stack_1_it = stack_1.begin();
//         stack_1_ite = stack_1.end();
//         std::cout << BOLDCYAN << "----------------" << RESET << std::endl;
//         std::cout << BOLDMAGENTA << "stack_1 (new)" << RESET << std::endl;
//         while (stack_1_it != stack_1_ite)
//         {
//             std::cout << BOLDBLUE << *stack_1_it << RESET << std::endl;
//             ++stack_1_it;
//         }
//         std::cout << BOLDCYAN << "#===============================#" << RESET << std::endl;
//     }
//     return (0);
// }
/*===============================================================================*/
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << BOLDYELLOW << mstack.top() << RESET  << std::endl;
    mstack.pop();
    std::cout << BOLDYELLOW << mstack.size() << RESET << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
/*===============================================================================*/
/* Creating two iterators to print the stack ()mstack*/
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << BOLDBLUE << *it << RESET << std::endl;
        ++it;
    }
/*===============================================================================*/    
    std::stack<int> s(mstack);
    /* To make sure that the two stacks are different from each other. */
    s.pop();
    std::cout << BOLDYELLOW << mstack.top() << RESET  << std::endl;
    std::cout << BOLDYELLOW << s.top() << RESET  << std::endl;
    return 0;
}

/*===============================================================================*/