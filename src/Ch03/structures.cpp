
/*
    Structures:
        * Containers of heterogenous data models
        * Like classes but data members are public
        * can contain functions like classes as well
*/

#include <iostream>
#include <string>

using namespace std;

enum class cow_purpose {dairy, meat, hide, pet};

struct cow{
    string name;
    int age;
    cow_purpose purpose;
};

int main(){
    cow my_cow; // my_cow is a cow object 
    my_cow.age = 5;
    my_cow.name = "Betsy";
    my_cow.purpose = cow_purpose::dairy;
    cout << my_cow.name << " is a type-" << (int)my_cow.purpose << " cow." << endl;
    cout << my_cow.name << " is " << my_cow.age << " years old." << endl;
    
    cout << endl << endl;
    return (0);
}
