#include <stdio.h>
int main()
{
    int number = 100;
    long long int longNumber = 16464946498494649;
    float number2 = 22.25;
    double number3 = 22.2554226;
    char word = 'J';
    char string[6] = "himel";

    int arr[5] = {100, 200, 300, 400, 500};
    float floatArr[5] = {100.25, 200.12, 300, 400, 500};
    char word2[5] = {'a', 'b', 'c', 'd', 'e'};


    printf("%d \n", number);
    printf("%lld \n", longNumber);
    printf("%f \n", number2);
    printf("%.10lf \n", number3);
    printf("%c \n", word);
    printf("%s", string);

    return 0;
}