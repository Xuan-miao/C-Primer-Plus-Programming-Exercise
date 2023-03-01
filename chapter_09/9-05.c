#include <stdio.h>

void large_of(double * x, double * y);

int main(void)
{
    double a, b;

    printf("Enter two numbers:");
    scanf("%lf%lf", &a, &b);
    printf("a=%g, b=%g\nafter...\n", a, b);
    large_of(&a, &b);
    printf("a=%g, b=%g\n", a, b);

    return 0;
}

void large_of(double * x, double * y)
{
    if(*x > *y)
        *y = *x;
    else
        *x = *y;
}