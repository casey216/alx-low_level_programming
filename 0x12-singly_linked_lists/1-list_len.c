#include "lists.h"

/**
 * list_len - prints all the elements of a list_t list.
 *
 * @h: list_t list
 *
 * Return: size of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
                count++;
        }

        return (count);
}
