#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}
int binarySearch(int arr[], int size, int target)
{
    int left = 0, right = size - 1, index = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid] == target) {
            index = mid;
            left = mid + 1;
        }
        else if(arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return index;
}
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
    bubbleSort(arr, size);
    printf("Sorted Array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int target = 12;
    int lastOccur = binarySearch(arr, size, target);
    if(lastOccur != -1){
        printf("Last occurrence position of %d is %d\n", target, lastOccur+1);
    } else {
        printf("%d Not found\n", target);
    }
    return 0;
}