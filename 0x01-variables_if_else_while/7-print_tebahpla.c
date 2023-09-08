#include <stdio.h>

/**
 * main - entry
 *
 * Description: print tebahpla
 *
 * Return: always  0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
