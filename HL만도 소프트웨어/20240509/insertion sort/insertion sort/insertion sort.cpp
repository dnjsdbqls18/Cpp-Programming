#include<stdio.h>

int main()
{
    int arr[5] = { 15,11,1,3,8 };
    int temp;

    printf("삽입 정렬 전 배열\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    for (int i = 1; i < 5; i++)
    {
        temp = arr[i];
        int j;

        for (j = i; j > 0 && arr[j - 1] > temp; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }

    printf("삽입 정렬 후 배열\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    return 0;
}
