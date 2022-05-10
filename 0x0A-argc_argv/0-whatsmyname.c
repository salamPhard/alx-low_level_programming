#include <stdio.h>
#include<stdlib.h>
/**
 * main - prints file name
 * @argc: first param
 * @argv: second param
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
