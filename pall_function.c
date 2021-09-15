#include "monty.h"

/**
 * pall_function - prints all the values on the stack, starting from the top.
 * @head: New node
 * @line: Line to read
 *
 * Return: Void
 */

void pall_function(stack_t **head, unsigned int line)
{
	int count = 0;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
}
