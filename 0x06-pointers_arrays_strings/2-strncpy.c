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
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[i] = src[i];
while (i < n)
dest[i++] = '\0';
return (dest);
}
