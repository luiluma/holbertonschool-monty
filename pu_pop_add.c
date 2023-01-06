#include "monty.h"
/**
 * pop_func - removes the top element of the stack
 * @stack: double pointer to the begging of the stack (DLL)
 * @line_number: number of lines in the opcode file
 * Return: void
 */
void pop_func(stack_t **stack, unsigned int line_number)
{
	stack_t *aux_stack;

	if (*stack == NULL)
		handler_errors(line_number, 1);

	if ((*stack)->next == NULL)
	{
		free(*stack);
		*stack = NULL;
	}
	else
	{
		aux_stack = (*stack)->next;
		(*stack) = aux_stack;
		aux_stack = aux_stack->prev;
		(*stack)->prev = NULL;
		free(aux_stack);
	}
}

#include "monty.h"
/**
 * push_func - pushes an element to the stack
 * @stack: double pointer to a double linked list as stack
 * @line_number: number of lines inside the opcode file
 * Return: void
 */
void push_func(stack_t **stack, unsigned int line_number)
{
	stack_t *push_element;
	(void) line_number;

	push_element = malloc(sizeof(stack_t));
	if (push_element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	push_element->n = global_var;
	if (*stack == NULL)
		push_element->next = NULL;
	else
		push_element->next = *stack;
	push_element->prev = NULL;
	*stack = push_element;
	if (push_element->next != NULL)
		push_element->next->prev = push_element;

}

#include "monty.h"
/**
 * add_func - adds to the top two elements of the stack
 * @stack: double pointer to a double linked list as stack
 * @line_number: number of lines inside the opcode file
 * Return: void
 */
void add_func(stack_t **stack, unsigned int line_number)
{
	stack_t *aux_stack;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		handler_errors(line_number, 5);
	}
	aux_stack = *stack;
	if (aux_stack->next == NULL)
		handler_errors(line_number, 5);
	aux_stack->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free(aux_stack);
	(*stack)->prev = NULL;
}
