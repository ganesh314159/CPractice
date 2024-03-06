#include <stdio.h>
 
void main(){
    int factorial(int);
    int a;
    printf("\nEnter a number : ");
    scanf("%d", &a);
    printf("Factorial = %d", factorial(a));
    printf("\n");
}

int factorial(int num){
    if (num > 0){
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}
