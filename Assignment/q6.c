#include <stdio.h>

void main(){
    int size=10;
    int a[10]={4,5,6,9,8,2,3,5,1,4};
    //         0 1 2 3 4 5 6 7 8 9
    void PrintArray(int *, int);
    void swap(int *,int *);
    printf("\nUnsorted array \t: ");
    PrintArray(a, size);
    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            // Swaping using temporary variable.
            // if (a[i]>a[j]){
            //     int t=a[j];
            //     a[j]=a[i];
            //     a[i]=t;
            // }
            // Swaping using pointers.
            if (a[i]>a[j]){
                swap(&a[i],&a[j]);
            }
        }
    }
    printf("\nSorted array \t: ");
    PrintArray(a, size);
}

void PrintArray(int *a,int size){
    for (int i=0; i<size; i++){
        printf("%d ",*(a+i));
    }
}
// Explanation :-
// Input variable p=&a[i], q=&a[j] are address pointer variables,
// which points towards address of inputted variables.
// *p, *q are value pointer variables,
// which point towards values of assigned variables.
void swap(int *p, int *q){
    int temp = *q;
    *q = *p;
    *p = *&temp;
}