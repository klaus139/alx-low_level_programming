#include <stdio.h>
/**
 * main - prints the name of the program followed by a new line
 * @argc: name of command line argument
 * @argv: array that contains the program line argument
 * Return: 0 - success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
