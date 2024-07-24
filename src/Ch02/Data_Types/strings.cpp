/*
    * Not native in c++
    * Use string class from std string library
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(){

    const size_t Length1 = 25; 
    char s1[Length1] = "cstring1"; // c string as array of characters
    char s2[] = "cstring2";
    string cpps1 = "cppstring1"; // c++ string
    string cpps2 = " cppstring2";
    strncat(s1,s2,25);

    cout << s1 << "\n";

    cout<< cpps1 + cpps2 << "\n";

    return(0);

}