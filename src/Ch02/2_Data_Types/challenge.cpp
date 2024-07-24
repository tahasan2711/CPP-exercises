
#include <iostream>

using namespace std;

int main(){
    float nums[] = {12.5,13.5,14,15,16,10,15};
    float average;
    float average2;
    
    for (int i=0;i<=sizeof(nums)/sizeof(float);i++) {
        average += nums[i]/(sizeof(nums)/sizeof(float));
    } 

    printf("average = %f\n",average);
    printf("length(nums) = %ul\n",sizeof(nums)/sizeof(float));


    // using for-each loop

    for (float i: nums) {
        cout << i << endl;
        average2 += i/(sizeof(nums)/sizeof(float));
    }

    cout << "Average = " << average2 << endl;
    

}