//CodeUp_c_1904.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void oddPrint(int startNum, int finishNum)
{
    if(startNum > finishNum)
        return;
    else
    {
        if(startNum % 2 != 0)
            printf("%d ", startNum);
        return oddPrint(startNum + 1, finishNum);
    }
}

int main(void)
{
    int sn, fn;
    
    scanf("%d %d", &sn, &fn);
    oddPrint(sn, fn);
    
    return 0;
}
