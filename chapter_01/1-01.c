#include <stdio.h>

int main(void)
{
    // in => cm
    printf("Input inch, output centimeter\n");
    double in;
    scanf("%lf", &in);
    printf("%g in = %g cm\n", in, 2.54*in);
    return 0;
}