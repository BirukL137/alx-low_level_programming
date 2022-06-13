#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: pointer
 * Return: Success 0
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
}
