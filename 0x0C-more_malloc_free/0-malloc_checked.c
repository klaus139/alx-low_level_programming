#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/*
 * malloc_checked - Entry point
 * @b: input amount
 * *malloc_checked: Entry
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
