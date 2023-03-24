#include "main.h"

/**
 * _strlen - reutns the length of the string
 * @s: strin
 * Return: length
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
