#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @stack: stack head
 * @counter: line_number
 * Return: no return
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *sum, *current;
	current = *stack;
	if (*stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = current->next;
	sum->n += current->n;
	pop(stack, line_number);
}
