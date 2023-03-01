#include <stdio.h>

void sort_three(double * x, double * y, double * z);

int main(void)
{
    double a, b, c;

    printf("Enter a,b,c:");
    scanf("%lf%lf%lf", &a, &b, &c);
    printf("a=%g, b=%g, c=%g\nafter sort...\n", a, b, c);
    sort_three(&a, &b, &c);
    printf("a=%g, b=%g, c=%g\n", a, b, c);

    return 0;
}

void sort_three(double * x, double * y, double * z)
{
    double temp;
    if(*x > *y)
    {
        temp = *y;
        *y = *x;
        *x = temp;
    }
    if(*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
    if(*x > *y)
    {
        temp = *y;
        *y = *x;
        *x = temp;
    }
}