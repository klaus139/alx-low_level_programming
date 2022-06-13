#include <stdio.h>

void rev_string(char *);

/**
 * main - check the code for Holberton school students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[1] = "";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
