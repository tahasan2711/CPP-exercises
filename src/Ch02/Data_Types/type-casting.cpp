/*
    * Data type interpretation
    * Implicit/explicit
*/

#include <iostream>
#include <cstdio>
#include <cstdint>

using namespace std;

int main(){

    float flt = -5.55;
    int32_t sgn ; // it is -6 : Implicit conversion
    uint32_t usgn ;

    sgn=flt;
    printf("flt = %f\n",flt);
    printf("sgn = %d\n",sgn);
    //printf("usgn = %d\n",usgn);

    usgn = sgn;

    printf("usgn = %u\n",usgn); // unsigned int format specifier %u
    
    cout << "usgn using type casting = " << (int32_t)flt << "\n"; // explicit type casting
    int n;
    printf("ABC%n\n",&n); // &n not n: address to where it should store the value
    printf("n=%d\n",n);


    // farhenhite to celsius

    float ff = 100;

    float cc;

    cc = (5/9)* (ff-32);

    printf("cc = %f\n",cc); // wrong result as 5/9 quotient is 0

    float cc1 = ((float)5/(float)9)* (ff-32);
    printf("cc1 = %f\n",cc1);

    return(0);
}