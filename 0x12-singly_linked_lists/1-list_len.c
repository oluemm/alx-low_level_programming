#include "lists.h"
/**
 * list_len - length of the list
 * @h:	 pointer to the structure
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int size = 0; /*initialize variable for counting*/

	while (h) /*while h is not NULL*/
	{
		size++;		 /*increment size*/
		h = h->next; /*move on to next node*/
	}
	return (size);
}
