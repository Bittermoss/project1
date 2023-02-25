#include <iostream>
#include <cassert>
#include "utils.h"
using namespace std;

bool isPrime(unsigned int value){
int counter = 0; 
  for(int n = 1; n < value + 1; n++){
   if (n != 0){
    if(value%n == 0){
        counter++;
    }
   }
  }


  if (counter > 2){
    return false; 
  }else{
    return true; 
  }
}

void findNPrimes(unsigned int primes[], unsigned int size){
    int value = 2; 
    int i = 0;
    while(primes[size-1] == 0){
        if (isPrime(value) == true){
            primes[i] = value; 
            i++;
        }
        value++;
    }
    
}