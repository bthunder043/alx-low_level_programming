#include "main.h"
/**
 * print_alphabet - Print the alphabet in lowercase.
 *
 * Return: void.
 */
void print_alphabet(void)
{
	chat alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
