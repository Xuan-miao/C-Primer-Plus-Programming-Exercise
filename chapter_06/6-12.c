#include <stdio.h>
#define CUTOFF 5

int main(void) 
{
    int i, j, n ;
    double sum;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    while (n > 0)
    {
        sum = 0;
        printf("1.0");
        for(i = 2; i <= n; i++)
        {
            printf(" + 1.0/%.1f", (double)i);
            if(i == CUTOFF && n > CUTOFF)
            {
                printf(" + ...");
                break;
            }
        }
        for(j = 1; j <= n; j++)
            sum += 1.0 / j;
        printf(" = %f\n", sum);
        sum = 0;
        printf("1.0");
        for(i = 2;i <= n;i++)
        {
            printf(" %c 1.0/%.1f", i%2==0 ? '-':'+', (double)i);
            if(i == CUTOFF && n > CUTOFF)
            {
                printf(" + ...");
                break;
            }
        }
        for(j = 1; j <= n; j++)
            sum += (j%2==0 ? -1:1) * 1.0 / j;
        printf(" = %f\n", sum);

        printf("Enter the number of elements: ");
        scanf("%d", &n);
    }
    
    printf("Down\n");

    return 0;
}