#include "holberton.h"
/**
 * read_textfile - reads text file and prints to std_out
 * @filename: input file name
 * @letters: number of char to read/print
 * Return: actual number of letters read/printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *c;

	fd = open(filename, O_RDONLY, 0400);
	c = malloc(sizeof(char) * letters);
	if (fd == -1 || filename == NULL || c == NULL)
		return (0);
	rd = read(fd, c, letters);
	wr = write(1, c, rd);
	close(fd);
	free(c);
	return (wr);
}
