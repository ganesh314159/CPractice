#include <stdio.h>

void main(){
    int C,D,T;
    printf("Enter first number : ");
    scanf("%d",&C);
    printf("Enter second number : ");
    scanf("%d",&D);
    printf("\nBefore swaping C=%d and D=%d",C,D);
    T=D;
    D=C;
    C=T;
    printf("\nAfter swaping C=%d and D=%d",C,D);
}