#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * *malloc_checked - Allocates memory with malloc
 * @b: input amount
 * Return: pointer to the new memory
 */
void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
