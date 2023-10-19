#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: nothing
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	int len = 0, au;

	hd = *head;
	while (hd)
	{
		hd = hd->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	hd = *head;
	au = hd->next->n * hd->n;
	hd->next->n = au;
	*head = hd->next;
	free(hd);
}
