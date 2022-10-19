#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from 1 to 98
 * @n: number input
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
