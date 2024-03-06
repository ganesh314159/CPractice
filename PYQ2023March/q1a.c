#include<stdio.h>

void main(){
    float C,F;
    printf("Enter Temperature in degree celsius : ");
    scanf("%2f",&C);
    F = (9/5)*C+32;
    printf("Celsius : %2f, Fahrenheit : %2f", C, F);
}