#include <stdio.h>

void copy_ptr(double * target, const double * source, int n);

int main(void)
{
    double source[2][3] = {{2.0, 4.0, 8.0}, {16.0, 32.0, 64.0}};
    double target[2][3];

    for (int i = 0;i < 2;i++)
        copy_ptr(target[i], source[i], 3);

    for (int i = 0;i < 2;i++)
    {
        for (int j = 0;j < 3;j++)
            printf("%5g  ", source[i][j]);
        printf("\n");
    }

    return 0;
}

void copy_ptr(double * target, const double * source, int n)
{
    for (int i = 0;i < n;i++)
        *(target + i) = *(source + i);
}