#include <stdio.h>

/**
 * main- Prints the word _putchar
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
}

int main(void)
{
	print_alphabet();
	putchar('\n');

	return (0);

}
