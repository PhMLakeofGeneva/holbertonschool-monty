#include "monty.h"
/**
 * pop - Removes the top element of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
 * @instruction: Instruction string
*/
void pop(stack_t **stack, unsigned int line_number, char *instruction
	__attribute__((unused)))
{
	if (!*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;

	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;

	free(temp);
}
