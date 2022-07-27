#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: added content
 *
 * Return: 1 if the foile exists, -1 if it does not fail or doesnt exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, length = 0;

	if (!filename)
		return (-1);
	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor < 0)
		return (-1);
	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}

	while (text_content[length])
		length++;
	if (write(file_descriptor, text_content, length) < 0)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
