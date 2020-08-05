#include "holberton.h"
/**
 * create_file - creates file
 * @filename: new file name
 * @text_content: new file content
 * Return: 1 on success, -1 on fail
 */
int create_file(const char *filename, char *text_content)
{
	int fd, size = 0, test;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	while (text_content[size])
		size++;
	test = write(fd, text_content, size);
	close(fd);
	if (test == -1)
		return (-1);
	return (1);
}
