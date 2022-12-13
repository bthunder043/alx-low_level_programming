#include "main.h"
/**
 * _islower - A program that would show 1 if the input
 * is a lowercase character, otherwise shows 0
 *
 * @c: the characteer in ASCII code
 *
 * Return: 1 for lowercase. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
