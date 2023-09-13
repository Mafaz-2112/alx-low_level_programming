#include"main.h"

/**
 * times_table - print the 9 times table
 *
 * Example table
 * 0, 0, 0, 0, ...
 * 0, 1, 2, 3, ..
 *
*/
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 1; mult <= 9; num++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * put space if ptoduct is a single number
			 * place the firist digit if its tow numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*get first digit*/
			_putchar((prod % 10) + 48); /*grt the second digit*/
		}
		_putchar('\n');
	}
}
