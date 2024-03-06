#include <stdio.h>

int main(){
    // This code shows different ways to access an elements of an array.
    // Declaring an Array without limit.
    int num[]={24,34,12,44,56,17};
    // Defining counter variable "i".
    int i;
    // Defining For Loop for printing Elements of an Array.
    for (i=0;i<=5;i++){
        // Explanation :-
        // Printing Elements of an array Keyword num[i] returns i'th element of num Array.
        // When we define an array, name of Array works as referencing variable
        // or address pointer variable for first element of Array.
        printf("Element = %d %d ", num[i], *(num+i));
        // Explanation :-
        // Counter variable "i" and Array keyword "num",
        // can be added from anyside would produce same result.
        // In short, we can say accessing elements of array in
        // C programming is commutative.
        printf("%d %d\n", *(i+num), i[num]);
        // Extra :- 
        // When we add a address variable and a integer,
        // Address gets incremented by integer 4 bytes,
        // which represents 64 bit system.
        // printf("\n %d\n",sizeof(i));
    }
    // Returning zero because main is int function.
    return 0;
}