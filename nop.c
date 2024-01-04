#include "monty.h"

/**
 * nop - Does nothing
 *
 * @stack: Argument unused
 * @line_number: Argument unused
 * @instruction: Argument unused
*/
void nop(__attribute__ ((unused)) stack_t **stack,
		 __attribute__ ((unused)) unsigned int line_number,
		 __attribute__ ((unused))char *instruction)
{
	(void)stack;
	(void)line_number;
}
