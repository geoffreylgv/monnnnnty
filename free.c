#include "monty.h"

/**
* _free - frees a doubly linked list
* @stack: head of the stack
* Return: nothing
*/
void _free(stack_t **stack)
{
	stack_t *current = *stack;
	while (current != NULL)
	{
		*stack = current->next;
		free(current);
		current = *stack;
	}
	current = NULL;
}
