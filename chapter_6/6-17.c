#include <stdio.h>
#define RATE 0.08
#define OUT 10.0

int main(void)
{
    double money = 100.0;
    int year = 0;
    while (money > 0)
    {
        money += money * RATE;
        money -= OUT;
        printf("after %d year(s): %f\n", ++year, money);      
    }
    

    return 0;
}