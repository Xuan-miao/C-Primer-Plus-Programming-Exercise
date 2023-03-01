#include <stdio.h>

int Fibonacci(int n);

int main(void)
{
    int n;
    while (scanf("%d", &n) == 1)
    {
        printf("Fibonacci(%d) = %d\n", n, Fibonacci(n));
    }
    
    return 0;
}

int Fibonacci(int n)
{
    int sum1 = 1;
    int sum2 = 1;
    int sum3;
    if(n <= 2)
        return 1;
    for(int i = 3;i <= n;i++)
    {
        sum3 = sum1 + sum2;
        sum1 = sum2;
        sum2 = sum3;
    }

    return sum3;
}