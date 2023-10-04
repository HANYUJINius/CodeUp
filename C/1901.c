//CodeUp_C_1901.c

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sum(int n)
{
    if (n >= 1)
    {
        sum(n - 1);
        printf("%d\n", n);
    }
}

int main(void)
{
    int num;
    scanf("%d", &num);
    sum(num);

    return 0;
}
