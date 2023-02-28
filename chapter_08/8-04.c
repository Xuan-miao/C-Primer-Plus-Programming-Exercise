#include <stdio.h>
#include <ctype.h>

int main(void)
{
    _Bool inword = 0;
    int alphas = 0, words = 0;
    char ch;

    printf("Enter something:\n");
    while((ch = getchar()) != EOF)
    {
        if(isalpha(ch))
            alphas++;
        if(isalpha(ch) && !inword)
        {
            inword = 1;
            words++;
        }
        if(!isalpha(ch) && inword)
            inword = 0;  
    }
    printf("alphas:%d, words:%d\n", alphas, words);
    printf("average:%f\n", 1.0 * alphas / words);
}