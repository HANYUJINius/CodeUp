//CodeUp_c_1928.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void numPrint(int n)
{
    printf("%d\n", n);
    if (n == 1)
        return;
    else if (n % 2 == 0)
        return numPrint(n / 2);
    else
        return numPrint(3 * n + 1);
}

int main(void)
{
    int num;
    scanf("%d", &num);
    numPrint(num);
    return 0;
}
