#include <stdio.h>
 
int factorial(int num)
{
    if (num > 0)
    {
        return num * factorial(num - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a=-3;
    printf("\n Result : %u", a);
}
