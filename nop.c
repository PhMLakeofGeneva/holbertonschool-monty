#include "monty.h"
/**
 * nop - Does nothing
 *
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
 * @instruction: Instruction string
*/
void nop(stack_t **stack __attribute__((unused)), unsigned int line_number __attribute__((unused)), char *instruction __attribute__((unused)))
{
	(void)stack;
	(void)line_number;
}
