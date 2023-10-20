#include "monty.h"

/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: nothing
*/
void execute(char *arg, stack_t **stack, unsigned int line_number)
{
	instruction_t op[] = {
		{"push", pusher}, {"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap}, {"add", add},
		{"nop", nop}, {"sub", _sub}, {"div", _div},
		{"mod", mod}, {"pchar", pchar}, {"pstr", pstr},
		{"rotl", rotl}, {"rotr", rotr}, {"mul", mul},
		{NULL, NULL}
	};
	int i;
	for (i = 0; op[i].opcode != NULL; i++)
	{
		if (strcmp(op[i].opcode, arg) == 0)
		{
			op[i].f(stack, line_number);
			return;
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, arg);
	exit(EXIT_FAILURE);
}
