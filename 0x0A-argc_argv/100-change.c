#include<stdlib.h>
#include<stdio.h>

/**
 * calculate_cents - calculate cents
 * @num: first param
 *
 * Return: 0
 */
int calculate_cents(int num)
{
	int coins = 0;

	while (num)
	{
		if (num >= 25)
		{
			num -= 25;
		}
		else if ( num >= 10)
		{
			num -= 10;
		}
		else if (num >= 5)
		{
			num -= 5;
		}
		else if (num >= 2)
		{
			num -= 2;
		}
		else if (num >= 1)
		{
			num -= 1;
		}
		coins++;
	}
	return (coins);
}

/**
 * main - print the minimum number of coins
 * @argc: first param
 * @argv: second param
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int numbers;

	if (argc != 2)
	{
		return (printf("Error\n"), 1);
	}
	number = atoi(argv[1]);
	if (number < 0)
	{
		return (printf("Error\n"), 1);
	}
	printf("%d\n",calculate_cents(number));
	return (0);
}
