#include<stdio.h>
#include<stdlib.h>

/**
 * main - multiplying two argument and show result
 * @argc: first param
 * @argv: second param
 *
 * Return: 0
 */
int main(int argc,  char *argv[])
{
	int i, num1, num2, product;

	if (argc != 3)
	{
	return (printf("Error\n"), 1);
	}
	for (i = 0; i < argc; i++)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}

