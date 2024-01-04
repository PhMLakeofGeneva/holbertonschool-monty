#include "monty.h"
/**
 * add - Adds the top two elements of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
 * @instruction: Instruction string
*/
void add(stack_t **stack, unsigned int line_number,
	char *instruction __attribute__((unused)))
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number, instruction);
}
