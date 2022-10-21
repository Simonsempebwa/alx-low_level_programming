#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int_isdigit(int c)
{
	int s = 0;

	if (c >= '0' && c <= '9')
		s = 1;

	return (s);
}
