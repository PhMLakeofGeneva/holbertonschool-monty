#include "monty.h"
/**
 * opcodes - Array of instructions for the Monty virtual machine.
 *
 * Each structure contains the name of an instruction and a pointer
 *	to the function that implements it.
*/
extern instruction_t opcodes[];

instruction_t opcodes[] = {
	{"push", push},
	{"pall", pall},
	{"pint", pint},
	{"pop", pop},
	{"swap", swap},
	{"add", add},
	{NULL, NULL}
};
