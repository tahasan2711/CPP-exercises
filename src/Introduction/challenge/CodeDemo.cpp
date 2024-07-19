// Learning C++ 
// Challenge 01_03
// Console Interaction, by Eduardo Corpeño 

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(){
    std::string str;

    cout << " Name ? :";
    cin >> str;
    cout << "Your name :" << str << endl;

    cout << endl << endl;
    return (0);
}
