#include "monty.h"
/**
 * pall - Prints all elements of the stack
 *
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
 * @instruction: Instruction string
*/
void pall(stack_t **stack, unsigned int line_number __attribute__((unused)), char *instruction __attribute__((unused)))
{
    stack_t *current = *stack;

    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
