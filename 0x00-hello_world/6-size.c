#include <stdio.h>

/**
 * main - entary point
 *
 * descreption: using sizeof to print the size of various types
 *
 * return: aleays 0 (success)
*/

int main(void)
{
	printf("size of a char: %u byte(s)\n", sizeof(char));
	printf("size of a int: %u byte(s)\n", sizeof(int));
	printf("size of a long int: %u byte(s)\n", sizeof(long int));
	printf("size of a long long int: %u byte(s)\n", sizeof(long long int));
	printf("size of a float: %u byte(s)\n", sizeof(float));
	return (0);
}
