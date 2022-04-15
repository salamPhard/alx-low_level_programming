#include <stdio.h>
/**
 * main - program to print out prime numbers
 *
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	k = 50829601;
	j = 150;

	for (i = 3; i <= j; i = i + 2)
	{
		while (j % i == 0)
		{
			j = j / i;
		}
	}
	printf("%d", k);
	printf("\n");
	return (0);
}
