//CodeUp_c_1912.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * factorial(n-1);
}

int main(void)
{
    int num;
    
    scanf("%d", &num);
    printf("%d", factorial(num));
    
    return 0;
}
