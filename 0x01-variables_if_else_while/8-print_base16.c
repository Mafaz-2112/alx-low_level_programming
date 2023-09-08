#include <stdio.h>

/**
 * main - entry
 *
 * Description: single numbers base of 16
 *
 * Return: always  0 (success)
*/

int main(void)
{
	int digit = 48; /*48; decimal rep of 0*/

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
