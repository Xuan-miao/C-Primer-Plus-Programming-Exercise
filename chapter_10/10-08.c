#include <stdio.h>

void copy_ptrs(double * target, const double * start, const double * end);

int main(void)
{
    double source[7] = {1, 2, 3, 4, 5, 6, 7};
    double target[3];

    copy_ptrs(target, source + 2, source + 5);
    for (int i = 0;i < 3;i++)
        printf("%5g", target[i]);
    printf("\n");
    
    return 0;
}

void copy_ptrs(double * target, const double * start, const double * end)
{
    while (start < end)
        *(target++) = *(start++);    
}