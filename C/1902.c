//CodeUp_c_1902.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void numPrint(int num)
{
    if(num == 0)
        return 1;
    else
    {
        printf("%d\n", num);
        return numPrint(num -1);
    }
}

int main(void)
{
    int num;
    
    scanf("%d", &num);
    numPrint(num);
    return 0;
}
