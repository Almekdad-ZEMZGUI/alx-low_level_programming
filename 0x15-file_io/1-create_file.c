#include "main.h"

/**
 * create_file - creates a file
 * @filename: pointer to the name of the file.
 * @text_content: pointer to a string to write in the file
 *
 * Return: 1 on success, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int f, wr, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f, text_content, length);

	if (f == -1 || wr == -1)
		return (-1);

	close(f);

	return (1);
}

