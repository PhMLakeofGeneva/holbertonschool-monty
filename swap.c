#include "monty.h"
/**
 * swap - Swaps the top two elements of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
 * @instruction: Instruction string
*/
void swap(stack_t **stack, unsigned int line_number,
	char *instruction __attribute__((unused)))
{
	if (!*stack || !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	int temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
