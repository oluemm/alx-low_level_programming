#ifndef LISTS
#define LISTS
/*===================HEADER-FILES=====================*/

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/*===================STRUCT=====================*/

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*===================PROTOTYPES=====================*/
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
int _strlen(const char *s);		/*returns the length of the string*/
void *_strdup(const char *src); /*copies the value of given string*/

#endif /*LISTS*/
