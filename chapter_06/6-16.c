#include <stdio.h>
#define RATE_DAPHNE 0.1
#define RATE_DEIRDRE 0.05

int main(void)
{
    double sum_daphne = 100, sum_deirdre = 100;
    int count = 0;
    while (sum_daphne >= sum_deirdre)
    {
        sum_daphne += 100 * RATE_DAPHNE;
        sum_deirdre += sum_deirdre * RATE_DEIRDRE;
        printf("after %d year(s):\n", ++count);
        printf("Daphne:%f\n", sum_daphne);
        printf("Deirdre:%f\n\n", sum_deirdre);
    }

    return 0;
}