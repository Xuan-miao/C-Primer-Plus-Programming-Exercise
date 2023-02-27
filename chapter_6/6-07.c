#include <stdio.h>

int main(void) 
{
    char word[15];
    int i;

    printf("Enter the word: ");
    scanf("%s", word);
    for(i = strlen(word); i >= 0; i--)
        printf("%c", word[i]);
    
    return 0;
}