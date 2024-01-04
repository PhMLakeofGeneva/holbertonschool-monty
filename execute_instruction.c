#include "monty.h"
/**
 * execute_instruction - Parse and execute Monty bytecode instructions
 *
 * @instruction: Instruction string
 * @stack: Pointer to the stack
 * @line_number: Line number in the Monty bytecode file
*/
void execute_instruction(char *instruction, stack_t **stack,
	unsigned int line_number)
{
	char *opcode;
	int i;

	instruction_t opcodes[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{"nop", nop},
	{NULL, NULL}
};

	opcode = strtok(instruction, " \t\n");
	if (!opcode || opcode[0] == '#')
		return;

	for (i = 0; opcodes[i].opcode; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			opcodes[i].f(stack, line_number, instruction);
			return;
		}
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
