#include "main.h"

/**
 * _strncpy - copys a string with n
 * @dest: copy to
 * @src: copy from
 * @n: number char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

for (j = 0; src[j] != '\0' && j < n; j++)
dest[j] = src[j];
while (j < n)
dest[j] = '\0';
return (dest);
}
