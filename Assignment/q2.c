#include <stdio.h>

void main(){
    int a=0,b=1,c,i,number=21;    
    printf("\nTerm \tDigit");
    printf("\n1\t1");    
    for(i=2; i<number; i++){    
        c=a+b;    
        printf("\n%d\t%d",i,c);    
        a=b;    
        b=c;    
    }
}