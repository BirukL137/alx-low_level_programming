#include "main.h"

/**
 * print_alphabet_x10 - Functions prints the alphabet in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char i;
	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
