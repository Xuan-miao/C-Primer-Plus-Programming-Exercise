#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    int line, row;
    char ch;
  
    printf("char: ");
    scanf("%c", &ch);
    printf("line: ");
    scanf("%d", &line);
    printf("row: ");
    scanf("%d", &row);
    chline('a', row, line);

    return 0;
}

void chline(char ch, int i, int j)
{
    for(int line = 0;line < j;line++)
    {
        for(int row = 0;row < i;row++)
            printf("%c", ch);
        printf("\n");
    }
}