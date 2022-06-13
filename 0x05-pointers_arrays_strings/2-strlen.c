#include "main.h"
/**
 * _strlen - give the lenght of a string
 * @s: the string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int i;

	for  (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
