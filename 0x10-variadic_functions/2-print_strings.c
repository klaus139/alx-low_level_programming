include "variadic_functions.h"

/**
 * print_strings - prints a string
 * @seperator: string to be printed between the string
 * @n: number of string to the function
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; 1 < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if ((seperator != NULL) && i < (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
	va_end(args);
}
