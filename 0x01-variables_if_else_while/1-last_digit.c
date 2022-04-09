#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - main block
 * Description: Get the random number and check the last digit
 * if last digit is greater than 5, zero and less than 6 and not zero
 * Return: 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %i is %i and is ", n, last_digit);
	if (last_digit > 5)
		printf("greater than 5\n");
	else if (last_digit != 0 && last_digit < 6)
		printf("less than 6 and not 0\n");
	else
		printf("0\n");

	return (0);
}

