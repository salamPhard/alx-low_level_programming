#include<stdio.h>
/**
 * main - main block
 * Description: Print 1 - 100
 * Fizz for multiples of 3
 * Buzz for multiple of 5
 * FizzBuzz for multiple of 3 and 5
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 = 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	}

	return (0);
}
