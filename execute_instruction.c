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

	/* Tokenisation de la chaîne d'instructions */
	opcode = strtok(instruction, " \t\n");
	if (!opcode || opcode[0] == '#')
		return;

	/* Recherche de l'opcode dans le tableau d'opcodes */
	for (i = 0; opcodes[i].opcode; i++)
	{
		if (strcmp(opcode, opcodes[i].opcode) == 0)
		{
			/* Opcode trouvé, appeler la fonction correspondante */
			opcodes[i].f(stack, line_number, instruction);
			return;
		}
	}

	/* Si l'opcode n'est pas trouvé, afficher un message d'erreur */
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	exit(EXIT_FAILURE);
}
