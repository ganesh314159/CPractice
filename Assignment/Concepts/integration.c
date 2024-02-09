#include<stdio.h>

void main(){
    float f(float), dx,a=0,b=2,n=10,sum=0;
    dx = (b-a)/n;
    for (float i=0;i<n;i++){
        sum = sum + f(a+(dx*i))*dx;
    }
    printf("Integral is %d",sum);
}

float f(float x){
    float a=x*x;
    return a;
}