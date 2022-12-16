#include "main.h"
/**
 * main - entry line
 * @void: no argument
 * Return: always 0
 */
int main(void)
{
	long int i, n;

	i = 612852475143;

	for (n = 2; n <= i; n++)
	{
		if (i % n == 0)
		{
			i = i / n;
			n--;
		}
	}
	printf("%lu\n", n);
	return (0);
}
