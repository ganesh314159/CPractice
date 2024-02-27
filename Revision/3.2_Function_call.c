#include<stdio.h>

void main(){
    // Passing Arguments to function
    // We can pass values to function directly or by reference.
    int add(int,int);
    // Passing values directly
    add(3,2);
    // Passing values by refenrence i.e. using variables
    int a = 2;
    int b = 3;
    add(a,b);

    // Variable defined inside function or loop is called as local variable,
    // These variables cannot be accessed outside.
    // Example :
    int sub(int,int);
    printf("%d", c);

    // Recursive function
    // Functions which call itself as subroutine are called as recursive function.
    int factorial(int);
    int result = factorial(10);
    printf("%d",result);
}

// Factorial
int factorial(int a){
    
    if (a<0){
        printf("Factorial of negative numbers doesn't exist.");
        return 0;
    }else if (a>0){
        return a * factorial(a-1);
    }else{
        return 1;
    }
}

int sub(int a, int b){
    int c = a-b;
}