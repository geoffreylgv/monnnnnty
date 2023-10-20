#include "monty.h"

/**
 * mul - multiplies the top two elements of the stack.
 * @stack: stack head
 * @line_number: line_number
 * Return: nothing
*/
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *sum;
	current = *stack;
	if (*stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = current->next;
	sum->n = sum->n * current->n;
	pop(stack, line_number);
}
