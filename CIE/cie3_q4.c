#include<stdio.h>

void main(){
    // x is a given input which can be any real number, hence defined as float.
    // Term is function which returns n'th term of series.
    float x=4.999999, Term(float, int);
    // Number of terms
    int term=7;
    // Since sum will be float, setting it as zero.
    float sum=0;
    // Following for loop takes sum of each term till given 'term'.
    for (int i=1;i<=term;i++){
        sum = sum + Term(x, i);
    }
    printf("For x=%f, Sum is %f", x,sum);
}

// This function takes variable x as input and n as power of numerator
float Term(float x, int n){
    // This is base of numerator
    float numerator = (x-1);
    // If power is 1, then skip till 'end' keyword.
    if (n==1){
        goto end;
    }
    // Multiplying numerator with itself till counter reaches to power 'n'.
    for (int i=2; i<=n; i++){
        numerator = numerator * numerator;
    }
    end:
        float denominator = x*n;
        float ratio = numerator/denominator;
    return ratio;
}


