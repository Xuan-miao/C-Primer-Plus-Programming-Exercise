#include <stdio.h>

void save(int row, int column, double arr[row][column]);
double row_ave(int n, const double arr[n]);
double arr_ave(int row, int column, const double arr[row][column]);
double arr_max(int row, int column, const double arr[row][column]);
void show_arr(int row, int column, const double arr[row][column]);

int main(void)
{
    double arr[3][5];
    printf("Enter 3 groups of number, every group includes 5 double-type numbers:\n");
    save(3, 5, arr);
    printf("Input:\n");
    show_arr(3, 5, arr);
    for (int i = 0;i < 3;i++)
        printf("Average of No.%d row is %g\n", i + 1, row_ave(5, arr[i]));
    printf("Average of all numbers is %g\n", arr_ave(3, 5, arr));
    printf("max: %g\n", arr_max(3, 5, arr));

    return 0;
}

void save(int row, int column, double arr[row][column])
{
    double input;

    for (int i = 0;i < row;i++)
        for (int j = 0;j < column;j++)
        {
            scanf("%lf", &input);
            arr[i][j] = input;
        }
}

double row_ave(int n, const double arr[n])
{
    double sum = 0.0;

    for (int i = 0;i < n;i++)
        sum += arr[i];

    return sum / n;
}

double arr_ave(int row, int column, const double arr[row][column])
{
    double sum = 0.0;

    for (int i = 0;i < row;i++)
        for  (int j = 0;j < column;j++)
            sum += arr[i][j];

    return sum / (row * column);
}

double arr_max(int row, int column, const double arr[row][column])
{
    double max = arr[0][0];

    for (int i = 0;i < row;i++)
        for (int j = 0;j < column;j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }

    return max;
}

void show_arr(int row, int column, const double arr[row][column])
{
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < column;j++)
            printf("%5g ", arr[i][j]);
        printf("\n");
    }
}