#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i; /*initialize variable i to datatype size_t*/

	for (i = 0; h != NULL; i++) /*loop thru l-list*/
	{
		if (h->str == NULL) /*check if node is NULL*/
			printf("[0] (nil) \n");
		else
			printf("[%d] %s \n", h->len, h->str); /*print vals in current node*/
		h = h->next;							  /*move on to next node*/
	}
	return (i);
}
