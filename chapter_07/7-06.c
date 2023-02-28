#include <stdio.h>
#include <string.h>
#define MAX_SIZE 40

int main(void)
{
    char sen[MAX_SIZE];
    int i = 0, count = 0;

    printf("Enter something:\n");
    while (((sen[i] = getchar()) != '#') && (i < MAX_SIZE))
    {
        i++;
    }
    for(i = 1;i<strlen(sen);i++)
    {
        if(sen[i-1] == 'e' && sen[i] == 'i')
            count++;
    }

    printf("amount of \"ei\":%d\n", count);

    return 0;    
}