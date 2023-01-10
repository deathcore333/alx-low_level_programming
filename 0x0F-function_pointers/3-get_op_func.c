#include "3-calc.h"
/**
 * get_op_func - a function pointer that selects the correct function as
 * instructed by user
 * @s: operator argument
 *
 * Return: function argument matching the operator argument
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
				return (ops[i].f);
			i++;
	}

	return (NULL);
}