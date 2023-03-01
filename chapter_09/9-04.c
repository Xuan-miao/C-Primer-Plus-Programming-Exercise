#include <stdio.h>

double harmonic_mean(double x, double y);

int main(void)
{
    double a, b;

    printf("Enter two numbers:");
    scanf("%lf%lf", &a, &b);
    printf("The harmonic mean of them is: %g\n", harmonic_mean(a, b));

    return 0;
}

double harmonic_mean(double x, double y)
{
    double ave = (1/x + 1/y) / 2;
    return 1 / ave;
}