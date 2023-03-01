#include <stdio.h>

double min(double x, double y);

int main(void)
{
    double a, b;
    
    printf("Enter two numbers:");
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("min:%g\n", min(a, b));

    return 0;
}

double min(double x, double y)
{
    return x < y ? x : y;
}