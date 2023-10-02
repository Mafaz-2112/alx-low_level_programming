#include "main.h"

/**
 * _isalpha - check if character is a letter
 *
 * @c: chack input of function
 *
 * Return: return 1 if c is lowercase
 *	otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
