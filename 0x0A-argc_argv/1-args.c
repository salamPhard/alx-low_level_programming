#include<stdlib.h>
#include<stdio.h>

/**
 * main - printing the number of argument
 * @argc: first param
 * @argv: second param
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int sum;

	for (sum = 0; sum < argc; sum++)
	{
		*argv[sum] = *argv[sum];
	}
	printf("%d\n", (sum - 1));
	return (0);
}
