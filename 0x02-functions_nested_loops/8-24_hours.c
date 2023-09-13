#include <stdio.h>

/**
 * main - entry pint
 *
 * jack_bauer - ptints every minte of the day
*/

void jack_bauer(void)
{
	for (int hour = 0; hour < 24; hour++)
	{
		for (int minute = 0; minute < 60; minute++)
		{
			printf("%02d:%02d\n", hour, minute);
		}
	}
}

	int main(void)
{
	printf("Jack Bauer's Day:\n");
	jack_bauer();
	return (0);
}
