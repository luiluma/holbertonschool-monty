#include "monty.h"
/**
 * is_number - checks if is a number
 * @token: string to check id is a number
 * Return: 0
 */
int is_number(char *token)
{
	int i;

	if (token == NULL)
		return (-1);
	for (i = 0; token[i] != '\0'; i++)
	{
		if (!(token[i] >= '0' && token[i] <= '9') && token[i] != '-')
			return (-1);
	}
	return (0);
}
/**
 * open_file_to_read - Open a monty files
 * @filename: Name if monty file
 * @stack: Structure
 * Return: 0
 */
int open_file_to_read(char *filename, stack_t **stack)
{
	FILE *in_file;
	char *token = NULL, *buff_line = NULL, *number = NULL;
	unsigned int line_counter = 0;
	size_t buff_size;

/**
 * _free - Free line, close file and exit
 * @buff_line:line
 * @in_file: file
 * Return: 0
 */
void _free(char *buff_line, FILE *in_file)
{
	free(buff_line);
	fclose(in_file);
	exit(EXIT_FAILURE);
}
