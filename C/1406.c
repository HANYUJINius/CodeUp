//CodeUp_c_1406.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    char word[15];
    char luv[15] = "love";
    int same = 1;
    scanf("%s", word);
    
    for(int i=0 ; word[i]!='\0' ; i++)
        if(luv[i] != word[i])
            {
                same = 0;
                break;
            }
        
    if(same)
        printf("I love you.");
    return 0;
}
