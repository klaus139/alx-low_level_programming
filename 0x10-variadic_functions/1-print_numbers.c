#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @seperator: string to be printed between numbers
 * @n: number fo integers passed to a function
 */
void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n ; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if ((seperator != NULL) && i < (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
