#include <stdio.h>

void main() {
    int i=0;
    int *b = i;
    do {
        printf("\n%d\n", b);
        i++;
    }
    while(i<10);

}
