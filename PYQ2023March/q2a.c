#include <stdio.h>
// 65-90 97-122

void main(){
    char a;
    printf("\nEnter any key from keyboard : ");
    scanf("%c",&a);
    if((a>=65)&&(a<=90)){
        printf("\nIt is a Upper Case Letter.");
    }else if((a>=97)&&(a<=122)){
        printf("\nIt is a Lower Case Letter.");
    }else{
        printf("\nIt is a other character.");
    }
    printf("\n");
}