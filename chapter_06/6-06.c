#include <stdio.h>

int main(void)
{
    int up, down;

    printf("Enter down values:");
    scanf("%d", &down);
    printf("Enter up values:");
    scanf("%d", &up);
    for(int i = down; i <= up; i++)
    {
        printf("%5d %5d %5d\n", i, i*i, i*i*i);
    }

    return 0;
}