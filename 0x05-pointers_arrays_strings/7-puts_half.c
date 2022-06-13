#include "main.h"
/**
 * puts_half - prints half os a string
 * @str: the main string to print half
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = 1 / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{	
		j = str[i];
		i++;
		_putchar(j);
	}
	_putchar('\n');
}
			
