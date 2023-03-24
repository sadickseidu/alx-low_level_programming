#include "main.h"

/**
 * _isupper - to check uppercase
 * @c: checks for case
 *
 * Return: 1 if uppercase and 0 if not uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
