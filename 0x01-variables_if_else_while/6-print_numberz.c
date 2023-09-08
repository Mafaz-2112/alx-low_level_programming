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
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
