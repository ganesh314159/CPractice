#include<stdio.h>

void main(){
    int A,B=2,C=3;
    float E=257.8;
    A = B*2+C/C;
    printf("\nA = %d", A);
    A = 10/B+E;
    printf("\nA = %d", A);
    E = 12/B*C;
    printf("\nE = %d", E);
    E = C/4;
    printf("\nE = %d", E);
    // B = E%4;
    printf("\nB = %d", B);
}