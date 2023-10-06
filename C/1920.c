//CodeUp_c_1920.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void binary(int n)
{
    if(n>1)
        binary(n/2);
        printf("%d", n%2);
}

int main(void)
{
    int num;
    
    scanf("%d", &num);
    binary(num);
    return 0;
}
