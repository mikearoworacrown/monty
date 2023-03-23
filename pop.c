#include "monty.h"

/*pop functions*/

/**
 * pop - pull an element from the stack or queue
 * @h: pointer to dll
 * @l: line number
 */
void pop(stack_t **h, unsigned int l)
{
	stack_t *node;

	node = pop_s(h);

	if (node == NULL)
	{
		printf("L%d: can't pop an empty %s\n", l, flag);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	free(node);
}
