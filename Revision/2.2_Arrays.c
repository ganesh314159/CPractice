#include<stdio.h>

void main(){
    int a[3]={};
    int b;
    for (int i=0;i<3;i++){
        printf("Enter Array Element number %d : ",i);
        scanf("%d",&b);
        a[i]=b;
    }
    printf("\nHere's your array : ");
    for (int i=0;i<3;i++){
        printf("%d ", a[i]);
    }
}