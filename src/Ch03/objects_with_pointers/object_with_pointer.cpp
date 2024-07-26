/*

*/

#include <iostream>
#include <string>
#include "/workspaces/CPP-exercises/src/Ch03/objects_with_pointers/cow.h"

using namespace std;

int main(){

    // cow my_cow("Hildy", 7, cow_purpose::pet);
    //std::cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << std::endl;
    //std::cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << std::endl;
    
    /*
        The above code was for my_cow object creation. Single object. compiler knows the space required for this object. But sometimes during runtime, objects can be created and the memory for those objects are dynamically allocated. pointers can be used to allocate new memory when creating new objects with constructor and free up when no longer needed.
    */

    cow *my_cow; // now it is pointer to the object. Not the object itself.

    my_cow = new cow("Hanna", 7, cow_purpose::hide); // 'new' operator gives the address of dynamically allocated instance created with cow constructor

    // now to access the member function, we need to dereference the pointer and use the member function
    cout << (*my_cow).get_name() << " is a type-" << (int) (*my_cow).get_purpose() << " cow." << endl;

    //another way to access is using 'member of operator' (->): just a rightbound arrow
    cout << my_cow -> get_name() << " is " << my_cow -> get_age() << " years old." << endl;

    delete my_cow; // calls destructor to delete the object

    cout << endl << endl;
    return (0);
}


