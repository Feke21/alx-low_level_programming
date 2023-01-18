#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - compares functions with pointer and returns the eqivalent
 * @s: pointer to a char
 *
 * Return: return function and operator. if operator is not 
 * between the 5 then return null.
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

	int i = 0;
