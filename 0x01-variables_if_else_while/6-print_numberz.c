#include <stdio.h>
/**
 * main - main block
 * Description: Printing all single digits numbers
 * using putchar function
 */
int main(void)
{
	int numberz = 0;

	for (numberz = 0; numberz < 10; numberz++)
	{
		putchar(numberz);
	}
	putchar('\n');

	return 0;
}
