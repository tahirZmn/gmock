#include <iostream>
#include "mockClass.h"

int sum (int a , int b){
     return a+b;
}

int product (int x, int y){
    return x*y;
}
void result (){
    mockClass m;
    int x = m.sum(2,2);
}

