#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: input pointer to char type representes the pointer
 * @b: input variable of char type
 * @n: unsigned int variable
 * Return: A pointer to be filled memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
