//CodeUp_c_1929.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void numPrint(int n)
{
    if (n == 1);
    else if (n % 2 == 0)
        numPrint(n / 2);
    else
        numPrint(n * 3 + 1);
    printf("%d\n", n);
}

int main(void)
{
    int num;
    scanf("%d", &num);
    numPrint(num);
    return 0;
}
