#include <stdio.h>
int main()
{
    int arr[] = {5, 56, 7, 12, 3, 56, 12, 1, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Initial Array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Array in reverse order: \n");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}