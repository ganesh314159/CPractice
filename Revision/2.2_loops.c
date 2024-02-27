#include<stdio.h>

void main(){
    // Three types of loops
    // For loop
    // for (counter;condition;increament/decrement){
    //      codeblock
    // }
    // int i
    // for (int i=0;i<3;i++){
    //     prinft("\nHello");
    // }
    // While loop
    int i=0;
    // while(i<3){
    //     printf("\nHello");
    //     i++;
    // }

    // while(i<6){
    //     printf("\nHello %d",i);
    //     i++;
    //     printf("\n%d",i);
    //     if(i==3){
    //         printf("\n%d",i);
    //         break;
    //     }
    // }
    
    // while(i<6){
    //     printf("\nHello %d",i);
    //     i++;
    //     if(i==3){
    //         printf("\nLet's break");
    //         break;
    //     }
    // }

    while(i<6){
        printf("\nHello %d",i);
        i++;
        if(i==3){
            printf("\nLet's break");
            continue;
        }
        printf("\nContinue moment. %d",i);
    }

    // Do While loop
    // do{
    //     printf("\nHello");
    //     i++;
    // }while(i<3);

    // Nested loops
    // for(int i=0;i<=10;i++){
    //     printf("\nLoop %d",i);
    //     int j=0;
    //     while(j<3){
    //         printf("\nFirst While loop");
    //         j++;
    //     }
    //     printf("\nj is %d",j);
    //     while((3<=j)&&(j<=6)){
    //         printf("\nSecond while loop");
    //         j++;
    //     }
    //     printf("\nj is %d",j);
    //     do{
    //         printf("\nThis is last loop");
    //         j++;
    //     }while(j<9);
    // }
}