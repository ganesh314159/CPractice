#include<stdio.h>

void main(){
    // If
    // int a=1,b=1;
    // if(a&&b){
    //     // codeblock
    //     printf("a is b");
    // }

    // If else
    // if(a&&b){
    //     printf("a is b");
    // }else if(a==b){
    //     printf("a equals b");
    // }else{
    //     printf("a is not b");
    // }

    // Switch
    // Only integer and character='A'
    int a='A',b='C';
    switch(a){
        case 'A':
            printf("\nThis is case 1.");
            break;
        case 'B':
            printf("\nThis is case 2.");
            break;
        case 3:
            printf("\nThis is case 3.");
            break;
        default:
            printf("\nThis is default case.");
            break;
    }
}