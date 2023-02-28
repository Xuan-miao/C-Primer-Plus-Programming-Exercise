#include <stdio.h>

double fun(double x, double y);

int main(void)
{
    double a, b;
    while (scanf("%lf%lf", &a, &b) == 2)
    {
        printf("%lf\n", fun(a, b));
        /* code */
    }
    
    return 0;
}

double fun(double x, double y)
{
    return (x-y)/(x*y);
}