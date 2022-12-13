#include "main.h"
/**
 * main - Prints 10 times the alphabet
 *
 *print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return - void
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i <= 9; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}