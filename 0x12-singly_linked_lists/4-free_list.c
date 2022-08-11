#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */
void free_list(list_t *head)
{
	if (head == NULL) /*check if head is already free */
		return;
	free_list(head->next); /*create recurssion*/
	free(head->str);	   /*free the string in head*/
	free(head);			   /*free head*/
}
