#include <stdio.h>

/**
 * main - entry
 *
 * Description: single numbers base of 10
 *
 * Return: always  0 (success)
*/

int main(void)
{
	char digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
