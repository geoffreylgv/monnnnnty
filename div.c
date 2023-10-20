#include "monty.h"

/**
 * _div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *current, *sum;
	current = *stack;
	if (*stack == NULL || current->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (current->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", line_number);
		exit(EXIT_FAILURE);
	}
	sum = current->next;
	sum->n = sum->n / current->n;
	pop(stack, line_number);
}
