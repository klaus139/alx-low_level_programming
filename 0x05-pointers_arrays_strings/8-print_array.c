#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n times the elements of an array
 * @a: the pointer to the elements
 * @n: times to print elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", a[count]);
		if (count < n - 1)
		{
			printf(", ");
		}
		count++;
	}
	printf("\n");
}
