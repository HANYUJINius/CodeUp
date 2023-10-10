//CodeUp_c_1418.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char tWord[10];
    int tIndex[10];
    int i, t=0;
    
    scanf("%s", tWord);
    
    for(i = 0 ; tWord[i] != '\0'; i++)
        if(tWord[i] == 't')
            tIndex[t++] = i;
    
    for(i = 0; i < t; i++)
        printf("%d ", tIndex[i]+1);
        
    return 0;
}
