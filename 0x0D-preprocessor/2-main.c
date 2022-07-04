#include <stdio.h>

/**
 * main - prints the nam eo fthe file it was compiled from
 *
 * Return: Everything worked ok
 */

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
