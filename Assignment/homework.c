#include <stdio.h>

void main(){
    int a=3, b=6;
    void swap(int *, int *);
    printf("\n Before swapping %d, %d",a,b);
    swap(&a,&b);
    printf("\n After swapping %d, %d",a,b);
}

// Explanation :-
// Input variable p=&a, q=&b are address pointer variables,
// which points towards address of inputted variables.
// *p, *q are value pointer variables,
// which point towards values of assigned variables.
void swap(int *p, int *q){
    int temp = *q;
    *q = *p;
    *p = *&temp;
}