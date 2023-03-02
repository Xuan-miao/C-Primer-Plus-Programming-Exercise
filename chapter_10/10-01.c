#include <stdio.h>

int main(void)
{
    int ar[10];
    int * a;
    double * b;
    char * c;
    printf("%zd\n", sizeof ar);
    printf("%zd\n", sizeof a);
    printf("%zd\n", sizeof b);
    printf("%zd\n", sizeof c);
    return 0;
}