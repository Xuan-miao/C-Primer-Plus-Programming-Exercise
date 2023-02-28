#include <stdio.h>
#include <math.h>

int main(void)
{
    double first[8];
    double second[8];
    double sum = 0.0;

    printf("Enter 8 numbers of the first array:");
    for(int i = 0;i<8;i++)
    {
        scanf("%lf", &first[i]);
        sum += first[i];
        second[i] = sum;
    }
    for(int i = 0;i<8;i++)
        printf("%7.2f", first[i]);
    printf("\n");
    for(int i = 0;i<8;i++)
        printf("%7.2f", second[i]);
    printf("\n");

    return 0;
}