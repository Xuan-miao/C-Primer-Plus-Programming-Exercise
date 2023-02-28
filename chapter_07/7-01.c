#include <stdio.h>

int main(void)
{
    int space = 0;
    int newline = 0;
    int other = 0;
    char ch;

    while ((ch = getchar()) != '#')
    {
        if(ch == ' ')
            space++;
        else if(ch == '\n')
            newline++;
        else
            other++;
    }
    printf("space:%d, enter:%d, other:%d\n", space, newline, other);

    return 0;
}