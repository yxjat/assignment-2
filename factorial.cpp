#include "functions.h"

int factorial(int n){
    if(n<0) return 0;
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
    //modified with negative number support 
}
