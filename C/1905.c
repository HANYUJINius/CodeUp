//CodeUp_c_1905.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int totalSum(int n)
{
    if (n == 1)
        return 1;
    else
        return n + totalSum(n - 1);
}

int main(void)
{
    int num;

    scanf("%d", &num);
    printf("%d",totalSum(num));
    return 0;
}
