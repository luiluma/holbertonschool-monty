#include "monty.h"
/**
 * main - entry point of Monty interpreter
 * @argc: number of arguments passed to the interpreter
 * @argv: arguments passed to the interpreter
 * Return: 0 if success otherwise exit failure
 */
int main(int argc, char *argv[])
{
	/* the passed opcode file to the monty interpreter*/
	char *file_name;

	file_name = argv[1];x
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	read_file(file_name);
	exit(EXIT_SUCCESS);
}
