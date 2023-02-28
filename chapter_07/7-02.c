#include <stdio.h>

int main(void)
{
    char ch;
    int i = 1;
    while ((ch = getchar()) != '#')
    {
        printf(" %c-%d ", ch, ch);
        if(i++ % 8 == 0)
            printf("\n");
    }
    return 0;
}