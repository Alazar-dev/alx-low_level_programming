#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Returns 0 (success)
 */
int main(void)
{
	int n;
	int last_digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %i ", n, last_digit);
	if (n > 5)
	{
	printf("and is greater than 5 \n");
	}
	else if (n == 0)
	{
	printf("and is 0 \n");
	}
	else if (n < 6 != 0)
	{
	printf("and is less than 6 and not 0 \n");
	}

	return (0);
}

