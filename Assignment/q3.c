#include <stdio.h>

void main(){
    int a=0,b,i,sum=0,digits=5,CountDigits(int);
    do {
    printf("Enter a 5 digit number : ");
    scanf("%d",&a);
    } while(CountDigits(a)!=digits);
    for (i=5;i>0;i--){
        b=a%10;
        sum=sum+b;
        a=(a-b)/10;
    }
    printf("Sum of digits of entered number is %d", sum);
}

int CountDigits(int i){
    int n=0;
    do {
        i /= 10;
        ++n;
    } while(i!=0);
    return n;
}