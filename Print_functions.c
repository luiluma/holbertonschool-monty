#include "monty.h"
/**
 * pall_func - prints all the values of the stack starting from the top
 * @stack: double pointer to a double linked list as stack
 * @line_number: number of lines inside the opcode file
 * Return: void
 */
void pall_func(stack_t **stack, unsigned int line_number)
{
	const stack_t *aux_stack;
	(void) line_number;

	if (stack == NULL)
		exit(EXIT_FAILURE);
	aux_stack = *stack;
	while (aux_stack != NULL)
	{
		fprintf(stdout, "%d\n", aux_stack->n);
		aux_stack = aux_stack->next;
	}
}

#include "monty.h"
/**
 * pint_func - prints the value at the top of the stack
 * @stack: double pointer to the beggining of the stack (DLL)
 * @line_number: the numbers of lines in the opcode file
 * Return: void
 */
void pint_func(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		handler_errors(line_number, 4);
	}
	fprintf(stdout, "%d\n", (*stack)->n);
}

#include "monty.h"
/**
 * nop_func - does not do anything -.-
 * @stack: double pointer to the bagging of the stack (DLL)
 * @line_number: number of lines in the opcode file
 * Return: void
 */
void nop_func(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}

