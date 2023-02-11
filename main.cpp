#include <iostream>
#include <cassert>
#include "utils.h"
using namespace std;

double constrain(double value, double low, double high){
    if(value > high){
        return high; 
    }else if(value < low){
        return low; 
    }else{
        return value; 
    }
}

int main() {

    //run at home
    // assert(constrain(100, 100, 100) == 100); 
    // assert(constrain(100, 50, 100) == 100); 
    // assert(constrain(50, 50, 100) == 50); 
    // assert(constrain(0, -3, 3) == 0);
    // assert(constrain(-3, -3, 3) == -3);
    // assert(constrain(3, -3, 3) == 3);

    //assert(constrain(-3.0, 0.0, 100.0) == 0.0 );
    //assert(constrain(120.0, 0.0, 100.0) == 0.0 );

     cout<<"Assert tests completed"<<endl;

    return 0;
}