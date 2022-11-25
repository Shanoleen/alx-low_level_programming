#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node at the beginning of the linked list
 * @head: pointer to the first node of the list
 * @str: string to add to new node in the list
 * Return: NULL if it fails / starting addr of the list
 */

list_t *add_node(list_t **head, const char *str)
{
char *dup;
int len;
list_t *new;

new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup = strfup(str);
if (dup == NULL)
{
free(new);
return (NULL);
}
for (len = 0; str[len];)
len++;
new->str = dup;
new->len = len;
new->next = *head;
*head = new;
return (new);
}
