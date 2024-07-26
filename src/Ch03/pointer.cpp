
/*
    * pointer saves the address
    * it itself is stored at different address
*/ 
#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 5;
    int *b;           // asterisk is here defining pointer type

    b = &a;

    cout << "b     = "<< b  << endl;
    cout << "a     = "<< a  << endl;
    cout << "&a    = "<< &a << endl;
    cout << "*ptr  = "<< *b << endl; // asterisk here is "indirection operator"/ dereference operator  
    cout << "&b    = "<< &b  << endl; // address of the pointer itself as it is store in another memory location
}




