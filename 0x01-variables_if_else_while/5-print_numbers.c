#include <stdio.h>
/**
 * main - main block
 * Description: Print all single digits numbers 
 * Return: 0
 */
int main(void)
{
	int numbers = 0;

	for (numbers = 0; numbers < 10; numbers++)
	{
		printf("%i", numbers);
	}
	printf('\n');
	
	return (0);
}
