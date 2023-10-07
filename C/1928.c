//CodeUp_c_1928.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void numPrint(int n)
{
    //printf("%d\n", n);
    if (n == 1)
    {
        printf("%d\n", n);
        return;
    }
    else if (n % 2 == 0)
    {
        printf("%d\n", n);
        return numPrint(n / 2);
    }
    else
    {
        printf("%d\n", n);
        return numPrint(3 * n + 1);
    }
}

int main(void)
{
    int num;
    scanf("%d", &num);
    numPrint(num);
    return 0;
}
