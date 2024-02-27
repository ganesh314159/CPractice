#include<stdio.h>

void main(){
    // A string is just array of characters
    // char str[]="Hello";
    // printf("%s",str);

    // String functions
    #include<string.h>
    // strcat() function joins 2 strings together.
    // strlen() function gives length of a string.
    // char a[]="Hello";
    // char b[]="World";
    // strcat(a,b);
    // printf("%s",a);

    // strcpy() function copies one string to another.
    // char a[]="Hello";
    // char b[strlen(a)];
    // strcpy(b,a);
    // printf("\nSource string = %s",a);
    // printf("\nDuplicated string = %s",b);

    // strcmp() function compares 2 strings
    // Output = 0 if identical
    // Output = -1 if Ascii code of char of first string is less
    // Output = 1 if Ascii code of char of first string is more
    // char a[]="Aaa";
    // char b[]="Bbb";
    // char c[]="Ccc";
    // printf("\n%d",strcmp(a,a));
    // printf("\n%d",strcmp(a,b));
    // printf("\n%d",strcmp(c,b));   
}