#include "monty.h"
/**
 * free_stack - Free the memory allocated for the stack
 *
 * @stack: Pointer to the stack
*/
void free_stack(stack_t **stack)
{
	stack_t *current = *stack, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*stack = NULL;
}
