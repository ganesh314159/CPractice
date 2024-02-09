#include<stdio.h>

void main(){
    float a,b,n,i,dx, total =0;
    a=1;b=2;n=10;
    dx = (b-a)/n;
    for (i=a;i<=b;i=i+dx){
        total = total +f(i)*dx;
    }
        printf("\n %f", total);
}

// f(x)=x^2
float f(float x){
    return x*x;
}