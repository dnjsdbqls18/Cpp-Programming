#define _CRT_SECURE_NO_WARNINGS
/*
#include <stdio.h>

int main(void)
{
	int array[3];
	int i;

	array[0] = 100;
	array[1] = 200;
	array[2] = 300;

	for (i = 0; i < 3; i++)
		printf("array[%d]ÀÇ °ª: %d", i, array[i]);
	return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
	char arr[5];

	scanf("%s", arr);
	printf("arr : %s\n", arr);

	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	char string1[10] = "ABCDEF";
	char string2[] = "ABCDEF";
	char string3[] = { 'A', 'B', 'C', 'D', 'F' };
	char string4[] = { 'A', 'B', 'C', 'D', 'F', '\0' };

	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%s\n", string3);
	printf("%s\n", string4);
	return 0;
}
*/

/*
#include <stdio.h>

void func(int arr[], int len);

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };

	func(arr, sizeof arr / sizeof(int));

	return 0;
}

void func(int arr[], int len)
{
	int i;

	for (i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
*/


#include <stdio.h>

void func(int arr[][4], int rows);

int main()
{
	int arr[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };

	func(arr, 2);

	return 0;
}

void func(int arr[][4], int rows)
{
	int i, j;

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d\t", arr[i][j]);
		printf("\n");
	}
}