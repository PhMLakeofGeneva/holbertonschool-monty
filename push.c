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
	long value;

	data = strtok(NULL, " \t\n");
	if (!data)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	errno = 0;
	value = strtol(data, &instruction, 10);
	if (errno != 0 || value > INT_MAX || value < INT_MIN || *instruction != '\0')
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = (int)value;
	new_node->prev = NULL;

	if (*stack)
	{
		new_node->next = *stack;
		(*stack)->prev = new_node;
	}
	else
		new_node->next = NULL;

	*stack = new_node;
}
