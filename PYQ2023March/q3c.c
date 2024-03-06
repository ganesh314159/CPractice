#include<stdio.h>

void main(){
    int term=20;
    int Fibonacci(int);
    printf("\nTerm \t Fibonacci Number");
    for (int i=1;i<=term;i++){
        printf("\n%d \t %d", i, Fibonacci(i));
    }
    printf("\n");
}

int Fibonacci(int n){
    if((n)>2){
        int c=Fibonacci(n-2)+Fibonacci(n-1);
        return c;
    }else if(n==1){
        return 0;
    }else {
        return 1;
    }
}