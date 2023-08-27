#include <iostream>
#include "functions.h"
using namespace std;

int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    int x = 56, y = 98;
    cout<<"GCD of "<<x<<" & "<<y<<" is "<<gcd(x,y)<<endl;
    cout<<"GCD through recursive funct is "<<gcd_rec(x,y)<<endl;
    return 0;
}
