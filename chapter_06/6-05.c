#include <stdio.h>

int main(void)
{
    char ch;
    int i, j, count;
    printf("Enter an upper letter: ");
    ch = getchar();
    count = ch - 'A';
    for(i = 0;i < count + 1;i++)
    {
        ch = 'A';
        for(j = 0;j < count-i;j++)
            printf(" ");
        for(j = 0;j < i+1;j++)
            printf("%c", ch++);
        ch--;
        for(j = 0;j < i;j++)
            printf("%c", --ch);
        printf("\n");
    }
    
    return 0;
}