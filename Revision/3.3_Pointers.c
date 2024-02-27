#include<stdio.h>

void main(){
    // 2 Types of pointer variable.
    // 1. Referencing(Address pointer) operator '&' - &a, &b, &c
    // in this & acts as a unary operator,
    // which returns address of variable.
    // int a=2;
    // printf("\nAddress : %d \tValue : %d", &a, a);
    
    // 2. Dereferencing(Value pointer) operator '*' - *a, *b, *c
    // in this, a,b,c should be referencing variables.
    // i.e. *a = *&i, *b = *&j, *c = *&k
    
    // By declaring value pointer variale,
    // It automatically makes assigned variable as address pointer.
    // int *a;
    // *a = 2;
    // printf("\nAddress : %d \tValue : %d", a, *a);
    
}