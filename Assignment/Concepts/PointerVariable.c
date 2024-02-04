#include <stdio.h>

void main(){
    int a[10]={0,1,2,3,4,5,6,7,8,9};
    for (int i=0;i<10;i++){
        int *t = &a[i];
        printf("\nAddress : %d\tValue : %d",t,*t);
    }
}