#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the list_t list.
 * Return: the number of nodes/element in list.
 */
size_t print_list(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		printf("[%u] ", h->len);
		if (h->str == NULL) /*check if node is NULL*/
			printf("(nil)\n");
		else
			printf("%s\n", h->str); /*print string in current node*/

		h = h->next;
		nodes++; /*move on to next node*/
	}
	return (nodes);
}
