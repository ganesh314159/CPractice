#include <stdio.h>

void main(){
    int size=10;
    int a[10]={4,5,6,9,8,2,3,5,1,4};
    //         0 1 2 3 4 5 6 7 8 9
    void PrintArray(int *, int);
    printf("\nUnsorted array : ");
    PrintArray(a, size);
    for (int i=0; i<size; i++){
        for (int j=i+1; j<size; j++){
            // if (a[i]>a[j]){
            //     int t=a[j];
            //     a[j]=a[i];
            //     a[i]=t;
            // }
            if (a[i]>a[j]){
                int *t1=&a[j];
                int *t2=&a[i];
                a[i]=*t1;
                a[j]=*t2;
            }
        }
    }
    printf("\nSorted array : ");
    PrintArray(a, size);
}

void PrintArray(int *a,int size){
    for (int i=0; i<size; i++){
        printf("%d ",*(a+i));
    }
}