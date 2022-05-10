#include<stdlib.h>
#include<stdio.h>

/**
 * main: adding parameters together 
 * @argc: first param
 * @argv: second param
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, result;

	result = 0;

	for (i = 0; i < argc; i++)
	{
		if (i > 0)
		{
			if (atoi(argv[i]) == 0)
			{
				return (printf("Error\n"), 1);
			}
			result += atoi(argv[i]);
		}
	}
	printf("%d\n", result);
}
