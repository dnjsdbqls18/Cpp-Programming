/*
#include <stdio.h>

int main(void)
{
   int a[3] = { 10, 7, 9};
   int i = 0;

   for (i = 0; i < 3; i++)

	   printf("%d\n", a[i]);

   return 0;
}
*/
/*
#include <stdio.h>

int main(void)
{
   char str1[6] = "apple";
   char str2[6] = { 'a', 'p', 'p', 'l', 'e' };

   printf("%s\n", str1);
   printf("%s\n", str2);
   return 0;
}
*/

#include <stdio.h>

int main(void)
{
	int a[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int i, k;

	for (i = 0; i < 2; i++)
		for (k = 0; k < 3; k++)

			printf("%d\n", a[i][k]);

	return 0;
}
