#include <stdio.h>

int main()
{
	int arr[5] = { 15,11,1,3,8 };
	int temp = 0;

	printf("���� ���� �� �迭\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n");

	printf("���� ���� �� �迭\n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			temp = arr[i]; // 15
			if (arr[i] > arr[j]) //15 < 100
			{
				temp = arr[i]; //test = 15
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}