#include "monty.h"
/**
 * stack_push - Adds an element to the top of the stack
 *
 * @stack: Pointer to the stack
 * @data: Data to add to the stack
*/
void stack_push(stack_t **stack, void *data)
{
	stack_t *new_node;

	if (!stack || !data)
		return;

	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = atoi((char *)data);
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
