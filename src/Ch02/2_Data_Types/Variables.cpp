
/*
        Constant literals:

                int: default type; 023(0 radix means octal); 0b102 (binary); 23U (trailing U means unsigned)

              float: 23.0f; (trailing f for float)

             Double: float literals. default type for floating type

              char : 'a'; '\0' (null character); '\n'

*/              


#include<iostream>

using std::cout;

int a=8 ,b=6; // static/global variable stored in data segment

int main(){
    
    bool tf=true;
    cout << tf << '\n';
    cout << b << '\n';
    unsigned int c;
    c=b-a;
    cout << "b-a = " << b-a << '\n';
    cout << "c = b-a = " << c << '\n';

    cout << "\n";

    return(0);



}

