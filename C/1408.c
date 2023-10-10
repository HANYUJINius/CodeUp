//CodeUp_c_1408.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char pwd[20];
    int i;
    
    scanf("%s", pwd);
    
    for(i = 0; pwd[i] != '\0';i++)
        printf("%c", pwd[i] + 2);
    printf("\n");
    
    for(i = 0; pwd[i] != '\0';i++)
        printf("%c", (pwd[i] *7) % 80 + 48);
    printf("\n");
    
    return 0;
}
