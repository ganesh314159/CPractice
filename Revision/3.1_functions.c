#include<stdio.h>

void main(){
    // There are 2 types of functions
    // 1. Built in functions : printf(), scanf() etc..
    // 2. User defined functions : See below

    // Declaring a function
    // int add(int, int);
    // Defining a function
    // Function is defined outside main()
    // Calling a function
    // printf("OutPut of function = %d",add(2,3));

    // void type function doesn't return anything.
    // void Greet();
    // Greet();
    
    // Parameters/Arguments : Inputs given to functions are called as parameters
    // int subtract(int,int);
    // In above example 2 integer parameters are given.
}

// Defining a function
int add(int a, int b){
    int c = a+b;
    return c;
}

// Void type function
void Greet(){
    printf("Good Morning.");
}

