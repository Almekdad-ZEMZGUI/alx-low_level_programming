#include "main.h"

/**
 * read_textfile- Read text file and print it to the POSIX
 * @filename: text file being read
 * @letters: number of letters it should read and print
 * Return: actual number of letters read and printed, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t wr;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	t = read(fd, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (wr);
}

