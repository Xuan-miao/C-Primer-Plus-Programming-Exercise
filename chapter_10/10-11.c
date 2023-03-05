#include <stdio.h>

void show_array(const double arr[][5], int row);
void times2(double arr[][5], int row);

int main(void)
{
    double arr[4][5] = {{1.1, 1.2, 1.3, 1.4, 1.5},
                        {2.1, 2.2, 2.3, 2.4, 2.5},
                        {3.1, 3.2, 3.3, 3.4, 3.5},
                        {4.1, 4.2, 4.3, 4.4, 4.5},};

    show_array(arr, 4);
    times2(arr, 4);
    printf("after:\n");
    show_array(arr, 4);
    return 0;
}

void show_array(const double arr[][5], int row)
{
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < 5;j++)
            printf("%5g", arr[i][j]);
        printf("\n");
    }
}

void times2(double arr[][5], int row)
{
    for (int i = 0;i < row;i++)
        for (int j = 0;j < 5;j++)
            arr[i][j] *= 2;
}