#include <unistd.h>
/**
 *  * main - Prints out the last part of a quote in the standard error
 *  * Return: 1 (if Success)
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, 59);
	return (1);
}
