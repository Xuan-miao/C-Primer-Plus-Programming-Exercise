#include <stdio.h>
#define SIZE 4

void sum_arr(const double arr1[], const double arr2[], double tar[], int n);

int main(void)
{
    double arr1[SIZE] = {2, 4, 5, 8};
    double arr2[SIZE] = {1, 0, 4, 6};
    double sum[SIZE];

    sum_arr(arr1, arr2, sum, SIZE);

    for (int i = 0;i < SIZE;i++)
        printf("%5g", sum[i]);
    printf("\n");

    return 0;
}

void sum_arr(const double arr1[], const double arr2[], double tar[], int n)
{
    for (int i = 0;i < n;i++)
        tar[i] = arr1[i] + arr2[i];
}
