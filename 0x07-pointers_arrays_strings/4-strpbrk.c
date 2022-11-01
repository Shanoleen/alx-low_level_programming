#include "main.h"

/**
 * _strpbrk - search a string for any of a set of byted
 * @s: source string
 * @accept: accept characters
 * Return: the string since the first found accept character
 */

char *_strpbrk(char *s, char *accept)
{
int a = 0, b;

while (s[a])
{
b = 0;
while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}
b++;
}
a++;
}
return ('\0');
}
