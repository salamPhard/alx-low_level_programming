#include <stdlib.h>
#include <time.h>
/** main - block of statement 
 *
 * Function to check if a number is positive zero or negative
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("is positive\n");
	}
	else if(n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);	
}
