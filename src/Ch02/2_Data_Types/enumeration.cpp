
/*
    * enum : a set of named integer constant. The names will be equivalent to a constant assigned consecutive integers
    * part of c
    * operate in global scope
    * limited type safety
    * For c++; enum class is introduced
    * Encapsulated with class scope solving name pollution
*/

#include <iostream>
#include <cstdint>

using namespace std;
//enum cow_purpose {dairy, meat, hide, pet}; 
//enum groceries {canned, frozen, meat, laundry, dairy, bakery}; // redefition is not allowed. Use class and scope

enum class cow_purpose {dairy, meat, hide, pet};
enum class groceries {canned, frozen, meat, laundry, dairy, bakery};

int main(){
    int a , b;

    //int meat = 5; // well this meat variable is under main() function scope. So, it will show 5 this time
    //a = meat; // encoded value for meat is 1

    a = (int) cow_purpose::meat;
    b = (int) groceries::meat;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
 

    // another way to use it
    cow_purpose aa;
    aa = cow_purpose::meat;

    cout<< "aa = " << (int) aa << endl;

    return (0);
}
