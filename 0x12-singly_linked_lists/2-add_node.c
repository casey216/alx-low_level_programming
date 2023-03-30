#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: head of a list_t list
 * @str: a string variable
 *
 * Return: pointer to list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;

	(*head) = new;

	return (*head);
}
