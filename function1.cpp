#include<iostream>
#include "functions.h"

int factorial(int n){
  if(n!=1){
    return(n*factorial(n-1)); // recursive call to calculate factorial
  }
  else return 1;
}
