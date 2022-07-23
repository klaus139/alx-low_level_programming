#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;

	/*honestly i had to check stack overflow and a few github pages for these*/
	return ((int) (((char *)&x)[0]));
}
