#include<stdio.h>
#define PI 3.1416

void main(){
    float r,V;
    printf("Enter radius (Meters): ");
    scanf("%2f",&r);
    V=(4/3)*PI*r*r*r;
    printf("\nRadius (Meters): %2f, Volume (Cubic Meter): %2f",r,V);
}