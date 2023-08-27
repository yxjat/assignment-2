#include<iostream>
#include "functions.h"
using namespace std;

int gcd(int x, int y){
    while(y!=0){
        int temp = x%y;
        x = y;
        y = temp;
    }
    return x;
}

int gcd_rec(int x, int y){
    return y==0 ? x : gcd(y,x%y);
}