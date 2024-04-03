#include <stdio.h>
int main()
{
    char var_1;
    printf("Please enter a character between (0-9): ");
    scanf("%c", &var_1);

    int result = var_1 - 48;
    printf("The result is: %d", result);
    return 0;
}