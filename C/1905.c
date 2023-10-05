//CodeUp_c_1905.c

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
