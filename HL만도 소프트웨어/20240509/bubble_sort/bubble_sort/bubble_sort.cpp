#include<stdio.h>

int main()
{
    int arr[5] = { 15,11,1,3,8 };
    int temp;

    printf("버블 정렬 전 배열\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 5 - 1; i++) 
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("버블 정렬 후 배열\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}
