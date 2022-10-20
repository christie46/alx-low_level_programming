#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: a pointer to the first struct in the linked list
 * Return: No Value
 */
void free_list(list_t *head)
{
<<<<<<< HEAD
	list_t *temp;

	for (; head;)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
=======
        list_t *temp;

        for (; head;)
        {
                temp = head;
                head = head->next;
                free(temp->str);
                free(temp);
        }
>>>>>>> 6fdc0baf561d906ff6ebf74cab982ce7e586fdde
}
