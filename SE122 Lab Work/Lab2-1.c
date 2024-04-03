#include <stdio.h>
int main()
{
    char letter;
    int num1;
    float num2;

    printf("Please enter a character : ");
    scanf("%c", &letter);
    printf("Please enter an Integer : ");
    scanf("%d", &num1);
    printf("Please enter a Floating point number : ");
    scanf("%f", &num2);

    printf("The character is %c \n", letter);
    printf("The Interger number is %d \n", num1);
    printf("The Floating point number is %f", num2);
    return 0;
}