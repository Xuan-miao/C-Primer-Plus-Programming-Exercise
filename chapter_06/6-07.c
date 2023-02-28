#include <stdio.h>

int main(void) 
{
    int i;
    char word[15];

    printf("Enter the word: ");
    scanf("%s", word);
    for(i = strlen(word); i >= 0; i--)
        printf("%c", word[i]);
    
    return 0;
}