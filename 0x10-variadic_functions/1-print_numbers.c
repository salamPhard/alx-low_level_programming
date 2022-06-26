#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers
 * @separator: characters to separate numbers
 * @n: number of inputs
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(x, int), (separator && i != n - 1) ? separator : "");
	}
	va_end(x);
	printf("\n");
}
