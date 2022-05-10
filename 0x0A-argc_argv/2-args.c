#include<stdlib.h>
#include<stdio.h>

/**
 * main - printing all argument
 * @argc: first param
 * @argv: second param
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
