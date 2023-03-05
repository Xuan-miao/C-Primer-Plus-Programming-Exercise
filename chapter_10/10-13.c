#include <stdio.h>

void save(double arr[][5], int n);
double row_ave(const double arr[], int n);
double arr_ave(const double arr[][5], int n);
double arr_max(const double arr[][5], int n);
void show_arr(const double arr[][5], int n);

int main(void)
{
    double arr[3][5];
    printf("Enter 3 groups of number, every group includes 5 double-type numbers:\n");
    save(arr, 3);
    printf("Input:\n");
    show_arr(arr, 3);
    for (int i = 0;i < 3;i++)
        printf("Average of No.%d row is %g\n", i + 1, row_ave(arr[i], 5));
    printf("Average of all numbers is %g\n", arr_ave(arr, 3));
    printf("max: %g\n", arr_max(arr, 3));

    return 0;
}

void save(double arr[][5], int n)
{
    double input;

    for (int i = 0;i < n;i++)
        for (int j = 0;j < 5;j++)
        {
            scanf("%lf", &input);
            arr[i][j] = input;
        }
}

double row_ave(const double arr[], int n)
{
    double sum = 0.0;

    for (int i = 0;i < n;i++)
        sum += arr[i];

    return sum / n;
}

double arr_ave(const double arr[][5], int n)
{
    double sum = 0.0;

    for (int i = 0;i < n;i++)
        for  (int j = 0;j < 5;j++)
            sum += arr[i][j];

    return sum / (5 * n);
}

double arr_max(const double arr[][5], int n)
{
    double max = arr[0][0];

    for (int i = 0;i < n;i++)
        for (int j = 0;j < 5;j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }

    return max;
}

void show_arr(const double arr[][5], int n)
{
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < 5;j++)
            printf("%5g ", arr[i][j]);
        printf("\n");
    }
}