#include <stdio.h>

void copy_vla(int row, int column, const double source[row][column], double target[row][column]);
void print_vla(int row, int column, const double arr[row][column]);

int main(void)
{
    double source[2][3] = {{1.1, 2.2, 3.3}, {4.4, 5.5, 6.6}};
    double target[2][3];

    copy_vla(2, 3, source, target);
    print_vla(2, 3, target);

    return 0;
}

void copy_vla(int row, int column, const double source[row][column], double target[row][column])
{
    for (int i = 0;i < row;i++)
        for (int j = 0;j < column;j++)
            target[i][j] = source[i][j];
}

void print_vla(int row, int column, const double arr[row][column])
{
    for (int i = 0;i < row;i++)
    {
        for (int j = 0;j < column;j++)
            printf("%5g ", arr[i][j]);
        printf("\n");
    }
}
