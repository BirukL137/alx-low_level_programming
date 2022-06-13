#include "main.h"

/**
 * swap_int - swap two numbers a and b
 * @n: pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
