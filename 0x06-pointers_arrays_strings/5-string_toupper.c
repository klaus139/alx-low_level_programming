#include "main.h"

/**
 * string_troupper - changes all lowercase letters to uppercase
 * @p: The string will be modified
 *
 * Return: char var
 */
char *string_troupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
