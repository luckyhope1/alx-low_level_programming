#include "lists.h"

/**
 * free_listq - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listq(listq_t **head)
{
	listq_t *temp;
	listq_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listq_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listq_t));

		if (new == NULL)
			exit(98);

		new->q = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->q)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listq(&hptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listq(&hptr);
	return (nnodes);
}
