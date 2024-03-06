#include<stdio.h>

void main(){
    int Add();
    int sum = Add();
    printf("\nSum is %d", sum);
    printf("\n");
}

int Add(){
    int a,b,c;
    printf("\nEnter number 1 : ");
    scanf("%d",&a);
    printf("\nEnter number 2 : ");
    scanf("%d",&b);
    printf("\nEnter number 3 : ");
    scanf("%d",&c);
    return a+b+c;
}