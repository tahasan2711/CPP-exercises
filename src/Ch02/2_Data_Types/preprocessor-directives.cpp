/*
    Before compilation code is preprocessed. Directives tell preprocessors what to
    add or remove like libraries, constants, code blocks etc.
*/

/*
    * starts with # (number/pound) 
    * standard libraries don't need extension and are in predefined path 
    * Does not end with semicolon
*/

#include <iostream>
#include <string>
#include <cstdint>

#define a 5000
#define DEBUG

using namespace std;



int main() {
    
    int32_t large = a;
    uint8_t small = 37;

#ifdef DEBUG                         // Not part of the original code but only for debugging purposes
    cout << "[Addition]" << "\n";
#endif

    large += small;

    cout << "The larger number is "<< large << "\n";

    return(0);
}


