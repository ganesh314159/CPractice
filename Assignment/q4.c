#include <stdio.h>

void main(){
    int C,D,T;
    printf("Enter value for C : ");
    scanf("%d",&C);
    printf("Enter value for D : ");
    scanf("%d",&D);
    printf("\nBefore swapping C=%d and D=%d",C,D);
    T=D;
    D=C;
    C=T;
    printf("\nAfter swapping C=%d and D=%d",C,D);
}