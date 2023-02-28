#include <stdio.h>

void option(void);
double get_num(void);
void compute(char op);
void divide(void);

int main(void)
{
    char input;

    option();
    while ((input = getchar()) != 'q')
    {
        switch (input)
        {
        case 'a':
            compute('a');
            break;
        case 's':
            compute('s');
            break;
        case 'm':
            compute('m');
            break;
        case 'd':
            divide();
            break;
        default:printf("Invalid input!\n");
            break;
        }
        while (getchar() != '\n')
            continue;
        option();
    }
    
    printf("Bye.\n");

    return 0;
}

void option(void)
{
    printf("===============================================\n");
    printf("Enter the operation of your choice:\n");
    printf("a.add           s.subtract\n");
    printf("m.multiply      d.divide\n");
    printf("q.quit\n");
}

double get_num(void)
{
    char ch;
    double num;
    while(scanf("%lf", &num) != 1)
    {
        while((ch =getchar()) != '\n')
            putchar(ch);
        printf(" is not a number.\n");
        printf("Please enter a number, such as 2.5, -1.78E8, or 3:");
    }
    return num;
}

void compute(char op)
{
    double x, y;
    printf("Enter first number:");
    x = get_num();
    printf("Enter second number:");
    y = get_num();
    switch (op)
    {
    case 'a':printf("%g + %g = %g\n", x, y, x + y);
        break;
    case 's':printf("%g - %g = %g\n", x, y, x - y);
        break;
    case 'm':printf("%g * %g = %g\n", x, y, x * y);
        break;
    default:
        break;
    }
}

void divide(void)
{
    double x, y;
    printf("Enter first number:");
    x = get_num();
    printf("Enter second number:");
    while ((y = get_num()) == 0.0)
    {
        printf("Enter number other than 0:");   
    }
    printf("%g / %g = %g\n", x, y, x / y);
}