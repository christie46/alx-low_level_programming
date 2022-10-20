#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * free_list - frees a linked list
 *  * @head: list_t list to be freed
 *  */
void free_list(list_t *head)
{
	list_t *temp;
	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

}
