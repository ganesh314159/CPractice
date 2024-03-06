#include<stdio.h>

void main(){
    // Defining b and c as de-referencing variable.
    float a=-1.5, *b, *c;
    b=&a;
    // Now b contains address of a.
    c=b;

    // %u stands for UnSigned value identifier. It returns a integer without Sign(-ve).
    printf("\n %u, %u, %u", a, b+1, c);
    // Following code shows various ways to access value of variable.
    // *&a and *(&a) shows pointers are distributive
    // Since b contains address of 'a', *b returns value of 'a'.
    // Since c contains value of 'b' which is address of 'a', *c returns value of 'a'.
    printf("\n %f, %f, %f, %f", *&a, *(&a), *b, *c);
}