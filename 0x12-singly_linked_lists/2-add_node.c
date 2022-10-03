#include "lists.h"
/**
 * _strlen - gets length of the string
 * @s: string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
/**
 * add_node - add new nodes to the list
 * @head: current place in the list
 * @str: string to add to the head
 * Return: pointer to current position in list
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *content;
	list_t *new;
	/*check if given string OR head-node is NULL*/
	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);							/*len attrib of the node bcoms the string length*/
	new = *head;								/*shuffling*/
	content = malloc((len + 1) * sizeof(char)); /*allocating memory for string*/
	if (content == NULL)						/*if memory allocation fails*/
		return (NULL);
	/*loop thru and copy xter by xter the string @str into a @content*/
	for (i = 0; str[i]; i++)
		content[i] = str[i];
	/*allocating memory space of datatype LIST_T for @new*/
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content); /*release the allocated memory*/
		return (NULL);
	}
	new->str = content; /*creating new node string*/
	new->len = len;		/*creating new node length*/
	new->next = *head;	/*creating new node next ptr*/
	*head = new;		/*newly added node becomes head*/
	return (new);
}
