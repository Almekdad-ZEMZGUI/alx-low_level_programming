#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: The string to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	wr = write(o, text_content, length);

	if (o == -1 || wr == -1)
		return (-1);

	close(o);

	return (1);
}

