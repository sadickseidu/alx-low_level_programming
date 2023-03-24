#include "main.h"

/**
 * _isdigit - if its digit
 * @c: c checks for digit
 *
 * Return: 1 if digit and 0 if not digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
