#include "main.h"

/**
 * _puts - function that prints a string followed by new line
 * @str: string
 * Returns: Success 0
 */

void _puts(char *str)
{
	int index;

	index = 0;

	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
