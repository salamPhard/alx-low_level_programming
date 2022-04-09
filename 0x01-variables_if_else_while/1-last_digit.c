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
	if (last_digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n,last_digit);
	else if(last_digit > 0 && last_digit < 6)
		printf("Last digit of %i is %i and is less than 6 and not zero\n", n,last_digit);
	else
		printf("Last digit of %i is %i and is equal to zero\n", n,last_digit);

	return (0);
}

