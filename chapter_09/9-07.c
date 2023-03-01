#include <stdio.h>
#include <ctype.h>

int locate_alpha(char alpha);
void read_location(void);

int main(void)
{
    printf("Enter something...\n");
    read_location();

    return 0;
}

int locate_alpha(char alpha)
{
    if(isupper(alpha))
        return alpha - 64;
    else if (islower(alpha))
        return alpha - 96;
    else
        return -1;    
}

void read_location(void)
{
    char ch;
    int result;
    while ((ch = getchar()) != EOF)
    {
        if(ch == '\n')
            continue;
        result = locate_alpha(ch);
        if(result == -1)
            printf("%c is not an alpha.\n", ch);
        else
            printf("%c is the No.%d alpha.\n", ch, result);
    }
    
}