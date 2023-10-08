//CodeUp_c_1930.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int superSum(int k, int n)
{
    int sum = 0;
    if (k == 0)
        sum += n;
    else
        for (int i = 1; i <= n; i++)
            sum += superSum(k - 1, i);
    return sum;
}

int main(void)
{
    int k, n;

    while (scanf("%d %d", &k, &n) != EOF)
        printf("%d\n", superSum(k, n));
    return 0;
}
