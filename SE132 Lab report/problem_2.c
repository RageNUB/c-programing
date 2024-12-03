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
    int target = 12;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target){
            printf("First occurrence position of %d is %d\n", target, i+1);
            break;
        }
    }
    
    return 0;
}