#include "monty.h"

int main(int argc, char **argv)
{
	int descripteurfichier;

	if (argc < 2 | argc < 3)
	{
		printf("USAGE: monty file\n");
		exit (EXIT_FAILURE); }
	descripteurfichier = open(*argv[1], O_RDONLY);
	if (descripteurfichier == -1)
	{
		printf("Error: Can't open file %s\n", *argv[1]);
		exit (EXIT_FAILURE);
	}
	if (strcmp(*argv[1], "push"))
		stack_push(/*complete*/);
	if (strcmp(*argv[1], "pall"));
		stack_pall(/*complete*/);
	if (strcmp(*argv[1], "pint"))
		stack_pint(/*complete*/);
	if (strcmp(*argv[1], "pop"))
		stack_pop(/*complete*/);
	if (strcmp(*argv[1], "swap"))
		stack_swap(/*complete*/);
	if (strcmp(*argv[1], "add"))
		stack_add(/*complete*/);
	if (strcmp(*argv[1], "nop"))
		stack_nop(/*complete*/);
	return (0);
}

