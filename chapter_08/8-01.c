#include <stdio.h>

int main(void)
{
    int count = 0;
    while (getchar() != EOF) 
    {
        count++;
    }
    printf("char:%d\n", count);

    return 0;
}