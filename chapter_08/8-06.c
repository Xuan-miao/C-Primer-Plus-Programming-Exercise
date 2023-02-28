#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    char ch;
    ch = get_first();
    printf("first:%c\n", ch);
}

char get_first(void)
{
    char ch;

    while (isspace(ch = getchar()))
        continue;

    return ch;
}