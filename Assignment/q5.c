#include <stdio.h>

void main(){
    // Indexing in an array starts from 0.
    int a[10]={1,2,3,4,6,6,7,3,0,9};
    //         0 1 2 3 4 5 6 7 8 9
    for (int i=0;i<10;i++){
        for (int j=i+1;j<10;j++){
            if (a[i]==a[j]){
                printf("\nValue at index %d is %d and it's a duplicate with index %d.",j,a[j],i);
            }
        }
    }
}