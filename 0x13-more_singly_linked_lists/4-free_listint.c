#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - a function that frees a listint_t list.
* @head: struct
*
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
