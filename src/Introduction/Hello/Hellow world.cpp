// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream> //preprocessor directives

int main(){
    std::cout << "Hi There!" << std::endl;
    // '::' = scope resolution operator
    // cout is std object
    // '<<' left-bound insertion operator
    // 'endl' insert newline by flushing the buffer

    std::cout << std::endl << std::endl;
    return (0);
}
