#include "main.h"
/**
 * _isalpha - A program that shows 1 if the input
 * is lower or upper case, otherwise returns 0
 *
 * @c: the character in ASCII code
 *
 * Return: 1 for letters in lower/upper case
 * returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
