#include "/workspaces/CPP-exercises/src/Ch03/objects_with_pointers/cow.h"

cow::cow(std::string name_i, int age_i, cow_purpose purpose_i){
    name = name_i;
    age = age_i;
    purpose = purpose_i;
}
std::string cow::get_name(){
    return name;
}
int cow::get_age(){
    return age;
}
cow_purpose cow::get_purpose(){
    return purpose;
}
void cow::set_age(int new_age){
    age = new_age;
}
