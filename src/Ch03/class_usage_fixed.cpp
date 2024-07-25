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
    cow(string name_i, int age_i, cow_purpose purpose_i){
        name = name_i;
        age = age_i;
        purpose = purpose_i;
    }
    string get_name() const{
        return name;
    }
    int get_age() const{
        return age;
    }
    cow_purpose get_purpose() const{
        return purpose;
    }
    void set_age(int new_age){
        age = new_age;
    }

};

int main(){
    cow my_cow("Hildy", 7, cow_purpose::pet);
    cout << my_cow.get_name() << " is a type-" << (int) my_cow.get_purpose() << " cow." << endl;
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    my_cow.set_age(10);
    cout << my_cow.get_name() << " is " << my_cow.get_age() << " years old." << endl;
    std::cout << std::endl << std::endl;
    return (0);
}
