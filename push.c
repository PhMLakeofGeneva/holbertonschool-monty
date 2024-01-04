#include "monty.h"
/**
 * push - Adds an element to the top of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
 * @instruction: Instruction string
*/
void push(stack_t **stack, unsigned int line_number, char *instruction)
{
	char *data;

	if (!instruction || (!isdigit(instruction[5]) && instruction[5] != '-'))
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	data = instruction + 5;

	int value = atoi(data);

	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;

	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	*stack = new_node;
}
