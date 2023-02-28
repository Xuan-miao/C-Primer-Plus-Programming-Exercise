#include <stdio.h>

int main(void)
{
    int a;
    int even = 0;
    double sum_even = 0.0;
    int uneven = 0;
    double sum_uneven = 0.0;

    printf("Enter some integers(0 to stop):\n");
    while ((scanf("%d", &a) == 1) && a != 0)
    {
        if(a % 2 == 0)
        {
            even++;
            sum_even += a;
        }
        else
        {
            uneven++;
            sum_uneven += a;
        }
    }
    printf("even:%d, average of even:%f\n", even, sum_even / even);
    printf("uneven:%d, average of uneven:%f\n", uneven, sum_uneven /uneven);

    return 0;
}