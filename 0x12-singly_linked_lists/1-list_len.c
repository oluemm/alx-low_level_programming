#include "lists.h"
/**
 * list_len - length of the list
 * @h:	 pointer to the structure
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t i;		   /*initialize variable i to datatype size_t*/
	unsigned int size; /*initialize variable for counting*/

	for (i = 0; h != NULL; i++) /*loop thru l-list*/
	{
		if (h->str != NULL) /*check if node is NULL*/
			size++;
		h = h->next; /*move on to next node*/
	}
	return (size);
}
