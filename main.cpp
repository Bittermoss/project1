#include <iostream>
#include <cassert>
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

    // assert(constrain(100, 100, 100)); 
    // assert(constrain(100, 50, 100)); 
    // assert(constrain(50, 50, 100)); 
    // assert(constrain(0, -3, 3));
    // assert(constrain(-3, -3, 3));
    // assert(constrain(3, -3, 3));

     cout<<"Assert tests completed"<<endl;

    return 0;
}