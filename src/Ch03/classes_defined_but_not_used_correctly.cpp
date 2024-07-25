/*

    classes:
        * Basic elements of object oriented programming
        * contain heterogenous data and models
        * data/functions are members
        *       Encapsulation: Hiding the data outside the scope of the class
        * By default: data members are private. But using member functions private data can be accessed
        * constructors are called when a object is created. An implicit one is called to allocate the memory space for the object
        * constructor does not have any return type
        * The purpose of the class is not to make private data unavailable to outside world. It's 


*/

#include <iostream>
#include <string>

using namespace std;
enum class cow_purpose {dairy, meat, hide, pet};

class cow{
    private:
    std::string name;
    int age;
    cow_purpose purpose;
public:
    cow(string name_i, int age_i, cow_purpose purpose_i){   // this is a constructor
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    string get_name() const{      // const correctness. getters only to access the data members. const will force it to not change anything
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }

};

int main(){
    cow my_cow;
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    std::cout << my_cow.name << " is a type-" << (int) my_cow.purpose << " cow." << std::endl;
    std::cout << my_cow.name << " is " << my_cow.age << " years old." << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
