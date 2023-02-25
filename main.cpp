#include <iostream>
#include <cassert>
#include "utils.h"
using namespace std;


int main() {

    unsigned int listSize = 100;
    unsigned int list [listSize]; 

    for(int n = 0; n < listSize; n++){
        list[n] = 0; 
    }

   findNPrimes(list, listSize);

    for(int n = 0; n < listSize; n++){
          cout << list[n] << endl; 
    }

    return 0;
}