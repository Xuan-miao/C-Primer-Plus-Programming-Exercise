#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
    int row, column;
    char ch;
  
    printf("char: ");
    scanf("%c", &ch);
    printf("row: ");
    scanf("%d", &row);
    printf("column: ");
    scanf("%d", &column);
    chrow('a', column, row);

    return 0;
}

void chrow(char ch, int i, int j)
{
    for(int row = 0;row < j;row++)
    {
        for(int column = 0;column < i;column++)
            printf("%c", ch);
        printf("\n");
    }
}