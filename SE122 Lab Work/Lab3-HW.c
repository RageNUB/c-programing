#include <stdio.h>
int main()
{
    int num1, num2, quotient, remainder, decimal;
    scanf("%d %d", &num1, &num2);

    quotient = num1 / num2;
    remainder = num1 % num2;
    decimal = (remainder * 100) / num2;
    printf("Quotient: %d.%d, Remainder: %d", quotient, decimal, remainder);

    return 0;
}