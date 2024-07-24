/*
    * Arrays are fixed in size [matlab arrays can be enlarged during runs!]
    * Has to be homogeneous
    * auto type does not work for arrays. Type needs to be specified

*/
#include <iostream>
#include <cstdio>

using namespace std;

#define size 4 

int main(){

    const size_t size2 = 4;

    float array[size2] = {2,4,8,16};
    for(int i=0;i<=3;i++) {
        cout << array[i] << "\n";
    }
}

