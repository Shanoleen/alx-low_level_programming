#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: source string
 * @c: character to locate from input array
 * Return: first occurence of charatcer or null if not found
 */

char *_strchr(char *s, char c)
{
int a = 0, b;

while (s[a])
{
a++;
}
for (b = 0; b <= a; b++)
{
if (c == s[b])
{
s += b;
return (s);
}
}
return ('\0');
}
