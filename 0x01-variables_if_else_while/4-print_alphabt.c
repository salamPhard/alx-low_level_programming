#include <stdio.h>
/**
 * main - main block
 * Description: Print all alphets in lower case
 * except char q and e
 * Return: 0
 */
int main(void)
{
	char val = 'a';

	for (val = 'a'; val <= 'z'; val++)
	{
		if (val != 'q' && val != 'e')
		{
			putchar(val);
		}
	}
	putchar('\n');

	return 0;
}

