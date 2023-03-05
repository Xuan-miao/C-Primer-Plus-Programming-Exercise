#include <stdio.h>
#define SIZE 5

void copy_arr(double target[], const double source[], int n);
void copy_ptr(double * target, const double * source, int n);
void copy_ptrs(double * target, const double * start, const double * end);
void print_array(const double arr[], int n);
int main(void)
{
    double source[SIZE] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[SIZE];
    double target2[SIZE];
    double target3[SIZE];

    copy_arr(target1, source, SIZE);
    printf("target1: ");
    print_array(target1, SIZE);

    copy_ptr(target2, source, SIZE);
    printf("target2: ");
    print_array(target2, SIZE);

    copy_ptrs(target3, source, source + SIZE);
    printf("target3: ");
    print_array(target3, SIZE);

    return 0;
}

void copy_arr(double target[], const double source[], int n)
{
    for (int i = 0;i < n;i++)
        target[i] = source[i];
}

void copy_ptr(double * target, const double * source, int n)
{
    for (int i = 0;i < n;i++)
        *(target + i) = *(source + i);
}

void copy_ptrs(double * target, const double * start, const double * end)
{
    while (start < end)
        *(target++) = *(start++);    
}

void print_array(const double arr[], int n)
{
    for (int i = 0;i < n;i++)
        printf("%5g", arr[i]);
    printf("\n");
}